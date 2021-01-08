//
// Programmer: Gary E. Christensen
// Date: 4/28/2019
// Function: Find the median card in a hand of bridge using the STL sort function
//
// Modified by: Your name goes here
// Date: today's date
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Card{
public:
    string face;   // 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace
    string suit; // clubs, diamonds, hearts, spades

    friend ostream &operator<<(ostream &os, const Card &card) {
        os << card.face << " of " << card.suit;
        return os;
    }

};

bool compareCards(Card & a, Card & b){

    // TODO: add a map for suit values and a map for face values

    // TODO: use the maps to return true if card a is less than card b

    return true;
}

int main ()
{
    vector<Card> hand{{"9", "clubs"},
                      {"9", "diamonds"},
                      {"6", "diamonds"},
                      {"10", "diamonds"},
                      {"jack", "diamonds"},
                      {"queen", "diamonds"},
                      {"king", "diamonds"},
                      {"ace", "spades"},
                      {"7", "spades"},
                      {"king", "hearts"},
                      {"5", "hearts"},
                      {"jack", "hearts"},
                      {"9", "hearts"}};

    cout << "original hand = ";
    for ( auto & card: hand){ cout << card << ", ";}
    cout << endl;

    sort(hand.begin(),hand.end(),compareCards);

    cout << "hand after sort = ";
    for ( auto & card: hand){ cout << card << ", ";}
    cout << endl;

    cout << "The median card = " << hand[hand.size()/2] << endl;

    return 0;
}