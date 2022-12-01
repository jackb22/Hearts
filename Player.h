//
// Created by Jack Bennett on 2022-11-29.
//

#ifndef HEARTS_PLAYER_H
#define HEARTS_PLAYER_H
#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"



class Player : private vector <Card*> {
private:
    string Name;

    //virtual functions for player / computer picking card
    virtual Card leader() = 0;
    virtual Card followingSuit(Card) = 0;


public:
    //Player's name
    string Name;
        //Constructor
        Player(string Name);

        //destructor
        virtual ~Player();

        //print method
        void print();

        virtual string getName();


        // is valid function for checking if card is valid
        bool isValid(Card::Suit suit, bool broken, const Card &card);



        // vector members which will be used
        using vector<Card*>::push_back;
        using vector<Card*>::size;
        using vector<Card*>::at;
        using vector<Card*>::begin;
        using vector<Card*>::empty;
        using vector<Card*>::erase;

        //playcard
        Card PlayCard();
        Card PlayCard(const Card);

};


#endif //HEARTS_PLAYER_H
