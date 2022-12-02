//
// Created by Jack Bennett on 2022-11-29.
//

//#include "Player.h"
//
//#include <utility>
//
//Player::Player();
//
//
//
//Player::Player(string Name){
//    this->Name = std::move(Name);
//}
//
//void Player::print(){
//    std::cout<< Name<<" has these cards: "<<endl;
//    for (int i = 0; i < size(); i++){ //printing out the cards that has been dealt to the player
//          std::cout<< at(i)<<" ";       //using the vector members
//    }
//     std::cout<<endl;
//}
//
////gets player Name and returns it
//string Player::getName() {
//    return Name;
//}
//
//    //checks if the card is valid
//bool Player::isValid(Card::Suit suit, bool broken, const Card &card) {
//    if (broken){
//        return true;
//    }
//    else if (card.getSuit() == suit){ // if suit = suit then return true
//        return true;
//    }
//    else{ //if suit != suit then return false
//        for (int i = 0; i < size(); i++){
//            if (at(i)->getSuit() == suit){
//                return false;
//            }
//        }
//        return true;
//    }
//
//}
//
////playcard return leading card if player is leading
//Card Player::PlayCard() {
//    return leadingCrd();
//}
//
////playcard return following suit if player is following
//Card Player::PlayCard(Card c) {
//    return followingSuit(c);
//}
