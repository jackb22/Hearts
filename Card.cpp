//
// Created by Jack Bennett on 2022-11-29.
//

#include "Card.h"

const string Card::RankName = "23456789TJQKA";
const string Card::SuitName = "SDCH";
const int Card::numRanks = RankName.length();
const int Card::numSuits = SuitName.length();
const int Card::numCards = Card::numRanks * Card::numSuits;
//const Card Card::TwoOfClubs (Card::Two, Card::Clubs);
//const Card Card::QueenOfSpades (Card::Queen, Card::Spades);

Card::Card() : rank(Two), suit(Spades) {}

Card::Card(Rank r, Suit s) : rank(r), suit(s) {}

Card::Card(string sCard){

    if (sCard[0] == Card::RankName[0])
        rank = Two;
    else if (sCard[0] == Card::RankName[1])
        rank = Three;
    else if (sCard[0] == Card::RankName[2])
        rank = Four;
    else if (sCard[0] == Card::RankName[3])
        rank = Five;
    else if (sCard[0] == Card::RankName[4])
        rank = Six;
    else if (sCard[0] == Card::RankName[5])
        rank = Seven;
    else if (sCard[0] == Card::RankName[6])
        rank = Eight;
    else if (sCard[0] == Card::RankName[7])
        rank = Nine;
    else if (sCard[0] == Card::RankName[8])
        rank = Ten;
    else if (sCard[0] == Card::RankName[9])
        rank = Jack;
    else if (sCard[0] == Card::RankName[10])
        rank = Queen;
    else if (sCard[0] == Card::RankName[11])
        rank = King;
    else if (sCard[0] == Card::RankName[12])
        rank = Ace;
    if (sCard[1] == Card::SuitName[0])
        suit = Spades;
    else if (sCard[1] == Card::SuitName[1])
        suit = Hearts;
    else if (sCard[1] == Card::SuitName[2])
        suit = Clubs;
    else if (sCard[1] == Card::SuitName[3])
        suit = Diamonds;


}

Card::~Card() {
    rank = Two;
    suit = Spades;
}

Card::Rank Card::getRank() const {
    return rank;
}

Card::Suit Card::getSuit() const {
    return suit;
}

int Card::getValueHeart() const{
    if(Card::suit == Hearts){
        return 1;
    }
    else if (Card::rank == Queen && Card::suit == Spades){
        return 13;
    }
    else{
        return 0;
    }
}

bool Card::isValid(string s) {
    bool sRank = false;
    bool sSuit = false;

    if (s.length() != 2) {
        return false;
    }

    for(int i = 0; i < Card::numRanks; i++){
        if(s[0] == Card::RankName[i]){
            sRank = true;
            break;
        }
    }

    for (int i = 0; i < Card::numSuits; i++){
        if(s[1] == Card::SuitName[i]){
            sSuit = true;
            break;
        }
    }

    if (sRank && sSuit){
        return true;
    }
    else{
        return false;
    }
}

// Overloaded operators: output
extern ostream& operator<< (ostream &out, const Card &c) {
    cout << Card::RankName[c.getRank()] << Card::SuitName[c.getSuit()];
    return out;
}

//overload operator for comparing cards
extern bool operator== (const Card& c1, const Card& c2){
    if (c1.getRank() == c2.getRank() && c1.getSuit() == c2.getSuit()){
        return true;
    }
    else{
        return false;
    }
}
