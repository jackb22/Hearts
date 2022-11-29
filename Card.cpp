//
// Created by Jack Bennett on 2022-11-29.
//

#include "Card.h"

Card::Card() : rank(Two), suit(Spades) {} 

Card::Card(Rank r, Suit s) : rank(r), suit(s) {}

Card::Card(string sCard){
    switch(sCard[0]) {
        case sCard[0] == Card::RankName[0]:
            rank = Two;
            break;
        case sCard[0] == Card::RankName[1]:
            rank = Three;
            break;
        case sCard[0] == Card::RankName[2]:
            rank = Four;
            break;
        case sCard[0] == Card::RankName[3]:
            rank = Five;
            break;
        case sCard[0] == Card::RankName[4]:
            rank = Six;
            break;
        case sCard[0] == Card::RankName[5]:
            rank = Seven;
            break;
        case sCard[0] == Card::RankName[6]:
            rank = Eight;
            break;
        case sCard[0] == Card::RankName[7]:
            rank = Nine;
            break;
        case sCard[0] == Card::RankName[8]:
            rank = Ten;
            break;
        case sCard[0] == Card::RankName[9]: 
            rank = Jack;
            break;
        case sCard[0] == Card::RankName[10]:
            rank = Queen;
            break;
        case sCard[0] == Card::RankName[11]:    
            rank = King;
            break;
        case sCard[0] == Card::RankName[12]:    
            rank = Ace;
            break;
    }
    switch(sCard[1]) {
        case sCard[1] == Card::SuitName[0]:
            suit = Spades;
            break;
        case sCard[1] == Card::SuitName[1]:
            suit = Hearts;
            break;
        case sCard[1] == Card::SuitName[2]:
            suit = Clubs;
            break;
        case sCard[1] == Card::SuitName[3]:
            suit = Diamonds;
            break;
    }
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

    for(int i = 0; i < Card::NumRanks; i++){
        if(s[0] == Card::RankName[i]){
            sRank = true;
            break
        }
    }

    for (int i = 0; i < Card::NumSuits; i++){
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

