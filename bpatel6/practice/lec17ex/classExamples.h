class MyClassA {
public:
    void setX(int x) { m_x = x; }

    void setY(int y) { m_y = y; }

    int getX() const { return m_x; }

    int getY() const { return m_y; }

private:
    int m_x;
    int m_y;
};

class MyClassB {
public:
    MyClassB() : m_x{0}, m_y{0} {
    }

    void setX(int x) { m_x = x; }

    void setY(int y) { m_y = y; }

    int getX() const { return m_x; }

    int getY() const { return m_y; }

private:
    int m_x;
    int m_y;
};

class MyClassC {
public:
    MyClassC(int x, int y) : m_x{x}, m_y{y} {
    }

    void setX(int x) { m_x = x; }

    void setY(int y) { m_y = y; }

    int getX() const { return m_x; }

    int getY() const { return m_y; }

private:
    int m_x;
    int m_y;
};

class MyClassD {
public:
    MyClassD() : m_x{0}, m_y{0} {
    }

    MyClassD(int x) : m_x{x}, m_y{0} {
    }

    MyClassD(int x, int y) : m_x{x}, m_y{y} {
    }

    void setX(int x) { m_x = x; }

    void setY(int y) { m_y = y; }

    int getX() const { return m_x; }

    int getY() const { return m_y; }

private:
    int m_x;
    int m_y;
};

class MyClassE {
public:
    MyClassE(int x = 0, int y = 0) : m_x{x}, m_y{y} {
    }

    void setX(int x) { m_x = x; }

    void setY(int y) { m_y = y; }

    int getX() const { return m_x; }

    int getY() const { return m_y; }

private:
    int m_x;
    int m_y;
};

//--------------
// AnotherClass with definition external to class declarations
//--------------
class AnotherClass {
public:
    AnotherClass(int id = 0); // constructor
    ~AnotherClass();          // destructor
private:
    int m_ID;
};
