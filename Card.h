//
// Created by Jack Bennett on 2022-11-29.
//

#ifndef HEARTS_CARD_H
#define HEARTS_CARD_H
#include <iostream>
#include <string>



class Card {

public:
    enum Suit{Spades, Hearts, Clubs, Diamonds, None}; //none is used for Getcard method

    static const std::string SuitName; //variable for Suit name
    static const int numSuits; //variable for number of suits
    static const int numCards; //variable for number of cards

    //Ranking of cards
    enum Rank{Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
        Jack, Queen, King, Ace}; //Declaring the rank of the card
    static const std::string RankName; //variable for names of rank of cards
    static const int numRanks;   //variable for number of ranks




    //Defualt constructor
    Card();
    //constructor for rank and suit
    Card(Rank r, Suit s);
    //constructor taking string as input
    Card(std::string sCard);
    //Deconstructor
    ~Card();

    //getters
    Rank getRank() const; //gets rank of card
    Suit getSuit() const; //gets suit of card
    int getValueHeart() const; //gets value of card for hearts

    //checks if card is valid
    static bool isValid(std::string v);


private:
    //variables for rank and suit
    Rank rank;
    Suit suit;
    int valueHeart;


};


//overload operator for printing the card
std::ostream& operator<<(std::ostream& os, const Card& c);

//overload operator for comparing cards
// Overloaded operators: equlity
extern bool operator== (const Card& c1, const Card& c2);




#endif //HEARTS_CARD_H
