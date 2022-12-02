//
// Created by Jack Bennett on 2022-11-29.
//


#ifndef HEARTS_DECK_H
#define HEARTS_DECK_H
#include <iostream>
#include <vector>
#include "Card.h"
#include "Player.h"
#include<random>


class Deck: private  vector<Card*>  {

public:
    // default constructor
    Deck();
    // a constructor which calls the reset method
    Deck(bool fullDeck);

//destructor
    virtual ~Deck();

    //shuffle deck
    void shuffleDeck();
    // print deck
    void print() const;
    //caling my card print method with a for loop

    // a reset method
    void reset(bool fullDeck);

    //draw method



    // datastructure creation:
//calling vector methods to use
     using vector<Card*>::begin;
     using vector<Card*>::erase;
     using vector<Card*>::clear;
     using vector<Card*>::size;
     using vector<Card*>::at;
     using vector<Card*>::empty;
     using vector<Card*>::push_back;

};

extern istream& operator>> (istream& in, Deck& deck);

#endif //HEARTS_DECK_H
