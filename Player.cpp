//
// Created by Jack Bennett on 2022-11-29.
//

#include "Player.h"

#include <utility>

Player::Player(string Name){
    this->Name = std::move(Name);
}

void Player::print(){
    cout<< Name<<" has these cards: "<<endl;
    for (int i = 0; i < size(); i++){ //printing out the cards that has been dealt to the player
         cout<< at(i)<<" ";       //using the vector members
    }
    cout<<endl;
}

//gets player Name and returns it
string Player::getName() {
    return Name;
}

    //checks if the card is valid
bool Player::isValid(Card::Suit suit, bool broken, const Card &card) {
    if (broken){
        return true;
    }
    else if (card.getSuit() == suit){ // if suit = suit then return true
        return true;
    }
    else{ //if suit != suit then return false
        for (int i = 0; i < size(); i++){
            if (at(i)->getSuit() == suit){
                return false;
            }
        }
        return true;
    }

}

//playcard
Card Player::PlayCard() {
    Card card = *at(0);
    erase(begin());
    return card;
}

Card Player::PlayCard(const Card& card) {
    for (int i = 0; i < size(); i++){
        if (at(i)->getSuit() == card.getSuit() && at(i)->getRank() == card.getRank()){ //if the card is in the player's hand
            erase(begin() + i);
            return card;
        }
    }
    return PlayCard();
}

