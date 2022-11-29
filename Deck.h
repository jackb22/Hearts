//
// Created by Jack Bennett on 2022-11-29.
//

//
// Created by Jack Bennett on 2022-11-29.
//


#ifndef HEARTS_DECK_H
#define HEARTS_DECK_H
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Card.h"
#include "Player.h"
#include <stack>

using namespace std;

class Deck {

  public:
    // default constructor
    Deck();
    // a constructor which calls the reset method
    Deck(bool fullDeck);

//destructor
    virtual ~Deck();

    //create sorted deck
    static void createDeck();

    //shuffle deck
    static void shuffleDeck();

    void print() const;

    // a reset method
     void reset(bool fullDeck);

     // datastructure using a stack
        stack<Card> deck;



};

extern istream& operator>> (istream& in, Deck& deck);

#endif //HEARTS_DECK_H
