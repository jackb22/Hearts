////
// Jack Bennett 0370668//
////
//
#ifndef HEARTS_PLAYER_H
#define HEARTS_PLAYER_H
#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"



class Player : private std::vector <Card*> {

private:

    // picking the leading card
    virtual Card followingSuit(Card) = 0;  // picking the following suit matching card
    virtual Card  noSuit() = 0;  //picks any card if no matching suit is available



protected:
    std::string Name;
public:
    //Player's name
        //default constructor
       Player();
        //Constructor
        Player( std::string Name);

        //destructor
        //virtual ~Player();

        //print method
        void print();

        virtual std::string getName();


        // is valid function for checking if card is valid
        bool isValid(Card::Suit suit, bool broken, const Card &card);



        // vector members which will be used
        using  std::vector<Card*>::push_back;
        using  std::vector<Card*>::size;
        using  std::vector<Card*>::at;
        using  std::vector<Card*>::begin;
        using  std::vector<Card*>::empty;
        using  std::vector<Card*>::erase;

        //playcard
        Card PlayCard();
        Card PlayCard( Card);


//virtual functions for player / computer picking card
virtual Card leadingCrd() = 0;
};


#endif //HEARTS_PLAYER_H
