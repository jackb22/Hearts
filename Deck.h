//
//// Jack Bennett 0370668//
//


#ifndef HEARTS_DECK_H
#define HEARTS_DECK_H
#include <iostream>
#include <vector>
#include "Card.h"
#include "Player.h"
#include<random>



class Deck: private  std::vector<Card*>  {

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
     using std::vector<Card*>::begin;
     using std::vector<Card*>::erase;
     using std::vector<Card*>::clear;
     using std::vector<Card*>::size;
     using std::vector<Card*>::at;
     using std::vector<Card*>::empty;
     using std::vector<Card*>::push_back;

};

extern std::istream& operator>> (std::istream& in, Deck& deck);

#endif //HEARTS_DECK_H
