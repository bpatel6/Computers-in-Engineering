#include <SFML/Graphics.hpp>
#include <time.h>

using namespace sf;

const int M = 25;   // Vertical window size
const int N = 40;   // Horizontal window size

int grid[M][N] = {0};   // Initialize the grid to value 0
int ts = 18;    // tile size

// Enemy Class
class Enemy{
public:
    explicit Enemy(int x = 300, int y = 300, int dx = 4 - rand() % 8, int dy = 4 - rand() % 8);
    void move();
    void setx(int x);
    int getx() const;
    void sety(int y);
    int gety() const;
    void setdx(int dx);
    int getdx() const;
    void setdy(int dy);
    int getdy() const;
private:
    int m_x;
    int m_y;
    int m_dx;
    int m_dy;
};

///////////////////
// Description: Getter functions to get the value of member variable m_x, m_y, m_dx, m_dy
// Input: No input
// Output: Value stored in member variable of m_x, m_y, m_dx, m_dy
//////////////////
int Enemy::getx() const {
    return m_x;
}

int Enemy::gety() const {
    return m_y;
}

int Enemy::getdx() const {
    return m_dx;
}

int Enemy::getdy() const {
    return m_dy;
}

///////////////////
// Description: Setter functions set the value of member variable m_x, m_y, m_dx, m_dy
// Input: int value number which will be set to the member variable accordingly
// Output: No output
//////////////////
void Enemy::setx(int x) {
    m_x = x;
}

void Enemy::sety(int y) {
    m_y = y;
}

void Enemy::setdx(int dx) {
    m_dx = dx;
}

void Enemy::setdy(int dy) {
    m_dy = dy;
}

// Constructor
// Initialize the value of member variable m_x, m_y, m_dx, m_dy
Enemy::Enemy(int x, int y, int dx, int dy) : m_x{x}, m_y{y}, m_dx{dx}, m_dy{dy} {
}

// Following function is to move enemy on the grid
void Enemy::move() {
    m_x += m_dx;
    if (grid[m_y / ts][m_x / ts] == 1) {
        m_dx = -m_dx;
        m_x += m_dx;
    }
    m_y += m_dy;
    if (grid[m_y / ts][m_x / ts] == 1) {
        m_dy = -m_dy;
        m_y += m_dy;
    }
}

// It's flood fill operation
// Blank space on the grid is 0
// Fills space with -1
// spinners in game call drop() for each spinner, then drop the the zero to minizone in the region with spinner in it
// after the drop commands fill all the remaining zeros with blocks, ie: 1

void drop(int y, int x) {
    if (grid[y][x] == 0) {
        grid[y][x] = -1;
    }
    if (grid[y - 1][x] == 0) {
        drop(y - 1, x);
    }
    if (grid[y + 1][x] == 0) {
        drop(y + 1, x);
    }
    if (grid[y][x - 1] == 0) {
        drop(y, x - 1);
    }
    if (grid[y][x + 1] == 0) {
        drop(y, x + 1);
    }
}

int main() {
    srand(time(0));

    // Creates a window size of 40W * 25H and names it "Xonix Game!"
    // Sets video framerate to 60fps
    RenderWindow window(VideoMode(N * ts, M * ts), "Xonix Game!");
    window.setFramerateLimit(60);

    // Initialize textures t1, t2, t3
    Texture t1, t2, t3;
    // Loads the tile image into variable t1
    if (!t1.loadFromFile("images/tiles.png")){
        return EXIT_FAILURE;
    }
    // Loads the game over image into variable t2
    if (!t2.loadFromFile("images/gameover.png")){
        return EXIT_FAILURE;
    }
    // Loads the enemy image into variable t3
    if (!t3.loadFromFile("images/enemy.png")){
        return EXIT_FAILURE;
    }

    Sprite sTile(t1), sGameover(t2), sEnemy(t3);    // Sprite the texture t1, t2 and t3
    sGameover.setPosition(100, 100);    // Sets the image position to display at m_x,m_y->(100, 100)
    sEnemy.setOrigin(20, 20);           // Sets the origin of enemy spawn at m_x,m_y->(20, 20)

    // Initialize the number of enemies in the game
    // Initialize the array Enemy
    int enemyCount = 4;
    Enemy a[10];

    // Initialize game to be true so it can be terminated later by game != true
    bool Game = true;
    // Initialize m_x, m_y, m_dx, m_dy coordinates to be 0
    int x = 0, y = 0, dx = 0, dy = 0;
    // Initialize timer to be 0
    // Initialize delay to be 0.07, which makes tile to go slow in empty(black) space
    float timer = 0, delay = 0.07;
    Clock clock;

    // Following loop sets up the 4 side of the window with tile by setting the value of it's to 1
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || j == 0 || i == M - 1 || j == N - 1) {
                grid[i][j] = 1;
            }
        }
    }
    //////////////////
    //Description: Main game program, entire game in a while loop
    /////////////////

    while (window.isOpen()) {
        float time = clock.getElapsedTime().asSeconds();
        clock.restart();
        timer += time;
        Event e;
        while (window.pollEvent(e)) {
            // Closes the game if user input is to close the game
            if (e.type == Event::Closed) {
                window.close();
            }
            // If user input or press the ESC key on keyboard it takes tile to the (m_x,Y) -> (0,0)
            // It allows user to restart the game if game != true
            if (e.type == Event::KeyPressed) {
                if (e.key.code == Keyboard::Escape) {
                    for (int i = 1; i < M - 1; i++) {
                        for (int j = 1; j < N - 1; j++) {
                            grid[i][j] = 0;
                            x = 0;
                            y = 0;
                            Game = true;
                        }
                    }
                }
            }
        }

        // If user press left arrow key then it moves one tile to the left
        if (Keyboard::isKeyPressed(Keyboard::Left)) {
            dx = -1;
            dy = 0;
        }
        // If user press right arrow key then it moves one tile to the right
        if (Keyboard::isKeyPressed(Keyboard::Right)) {
            dx = 1;
            dy = 0;
        }
        // If user press up arrow key then it moves one tile to the upward
        if (Keyboard::isKeyPressed(Keyboard::Up)) {
            dx = 0;
            dy = -1;
        }
        // If user press down arrow key then it move one tile to the downward
        if (Keyboard::isKeyPressed(Keyboard::Down)) {
            dx = 0;
            dy = 1;
        }

        // Checks if the game is still running and if it's then continues
        if (!Game) {
            continue;
        }

        // Following code is for the interacting with the game
        if (timer > delay) {
            x += dx;
            y += dy;

            if (x < 0) {
                x = 0;
            }
            if (x > N - 1) {
                x = N - 1;
            }
            if (y < 0) {
                y = 0;
            }
            if (y > M - 1) {
                y = M - 1;
            }

            if (grid[y][x] == 2) {
                Game = false;
            }
            if (grid[y][x] == 0) {
                grid[y][x] = 2;
                timer = 0;
            }
        }

        // Following loop moves the enemy on the grid. It loops over # of enemy assigned in game
        for (int i = 0; i < enemyCount; i++) {
            a[i].move();
        }

        // Resets the dx and dy
        if (grid[y][x] == 1) {
            dx = dy = 0;

            // Following loop is to close in space where there is no enemy
            for (int i = 0; i < enemyCount; i++) {
                drop(a[i].gety() / ts, a[i].getx() / ts);
            }

            // Following loop checks the remaining value of grid and if it's -1 changes to 0, otherwise make it 1
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < N; j++) {
                    if (grid[i][j] == -1) {
                        grid[i][j] = 0;
                    } else {
                        grid[i][j] = 1;
                    }
                }
            }
        }

        // Following loop kills the game if enemy structs the interacting line
        for (int i = 0; i < enemyCount; i++) {
            if (grid[a[i].gety() / ts][a[i].getx() / ts] == 2) {
                Game = false;
            }
        }

        //////////////////
        //Description: Draws the game on the screen
        /////////////////

        window.clear();     // Initially clear the window

        // Following loop is to draw tile on the grid
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                // Empty grid fill with all value 0 remain empty(black)
                if (grid[i][j] == 0) {
                    continue;
                }
                // Grid with all value 1 turns blue the first tile of the tiles.png
                if (grid[i][j] == 1) {
                    sTile.setTextureRect(IntRect(0, 0, ts, ts));
                }
                // Grid with value 2 turns red, 18*3 = 54 and each tile is 18 size
                if (grid[i][j] == 2) {
                    sTile.setTextureRect(IntRect(54, 0, ts, ts));
                }
                sTile.setPosition(j * ts, i * ts);
                window.draw(sTile);
            }
        }

        // Draw the purple tile (the 2nd tile of tiles.png) while it interact on the tile of blue
        sTile.setTextureRect(IntRect(36, 0, ts, ts));
        sTile.setPosition(x * ts, y * ts);
        window.draw(sTile);

        // Following function rotates the image of enemy
        sEnemy.rotate(10);

        // Following loop display the enemy to the screen
        for (int i = 0; i < enemyCount; i++) {
            sEnemy.setPosition(a[i].getx(), a[i].gety());
            window.draw(sEnemy);
        }

        // If game != true displays the game over logo to the screen
        if (!Game) {
            window.draw(sGameover);
        }

        // function to display the windows to the screen
        window.display();
    }

    return 0;
}



