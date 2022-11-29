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
    // defeault constructor
    Deck();
    // a constructor which calls the reset method
    Deck(void reset());

    //destructor
    virtual ~Deck();

    //create sorted deck
    void createDeck();

    //shuffle deck
    void shuffleDeck();

    // a reset method
     void reset();

     //random number generator
     void randomNum(int rand());



     // datastructure using a stack 
        stack<Card> deck;
        //push cards into the stack
        void pushCards();
        
        //pop cards from the stack
        void popCards();
        
        //delete cards in stack
        void deleteCards();
  
        


};


#endif //HEARTS_DECK_H
