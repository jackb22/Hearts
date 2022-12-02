////
//// Created by Jack Bennett on 2022-11-29.
////
//
//
//#include "HumanPlayer.h"
//#include "Card.h"
//
//extern Card leadingTrmpCard; //card object for leading trump card
//
////human player constructor
//HumanPlayer::HumanPlayer(std::string Name) : Player(Name) {}
//
////lets player pick any card to lead in the pile
//Card HumanPlayer::leadingCrd()  {
//    std::string tmpcard;; //temp string to hold card
//
//    //printing current hand of human player
//    std::cout << "Your hand: " << std::endl;
//    this->print();
//
//    //taking in card input //  validating input
//
//    while(true) {
//        std::cout << Name << " Pick a card to lead: " << std::endl;
//        std::cin >> tmpcard; //getting card from user
//
//        if (!Card::isValid(tmpcard)) { //if card is not valid
//            std::cout << "Invalid input,  try again" << std::endl;
//            std::cin >> tmpcard;
//        } else{
//            Card result(tmpcard); //creating card object
//            for (int i = 0; i < size(); i++) {
//                //if player has card in hand
//                if (result == *at(i)) {
//                    //remove card from hand
//                    result = *at(i);
//                    std::cout << Name << " played: " << result << std::endl;
//                    erase(begin() + i);
//                    return result;
//                }
//
//            }
//            std::cout<<result<<" is no longer in your hand! "<<std::endl;
//        }
//    }
//}
//
//
//// lets player pick a card that is not on suit
//Card HumanPlayer::noSuit() {
//    std::string tmpcard; //temp string to hold card
//
//    //taking in card from user / validating input
//    while(true){
//        std::cout << Name << " Pick a card you want to play: " << std::endl;
//        std::cin >> tmpcard;
//        if (!Card::isValid(tmpcard)) {
//            std::cout << "Invalid card, try again" << std::endl;
//            std::cin >> tmpcard;
//        } else{
//            Card result(tmpcard);
//            for (int i = 0; i < size(); i++) {
//                if (result == *at(i)) {
//                    result = *at(i);
//                    std::cout << Name << " played: " << result << std::endl;
//                    erase(begin() + i);
//                    return result;
//                }
//
//            }
//            std::cout<<result<<" is no longer in your hand! "<<std::endl;
//        }
//    }
//}
//
//
//
////lets player pick a card that is on suit
//Card HumanPlayer::followingSuit(Card card) {
//    std::string tmpcard; //temp string to hold card
//    bool foundSuit = false; //bool to check if player has card  on leadcrd.
//    int index =-1; // used for finding player card
//    //printing current hand of human player
//    std::cout << "Your hand: " << std::endl;
//    this->print();
//
//    //check if the player hand has same suit as lead card
//    for (int i = 0; i < size(); i++) {
//        if (at(i)->getSuit() == leadingTrmpCard.getSuit()) {
//            foundSuit = true;
//            break;
//        }
//    }
//
//    //if the player does not have the same suit as lead card
//    if(!foundSuit){
//        std::cout<<"You don't have any cards of the same suit as the lead card"<<std::endl;
//        return HumanPlayer::noSuit();
//    }
//    else{
//        //taking the card input
//        while(true){
//              std::cout<< Name << " Pick a card you want to play: " << std::endl;
//              std::cin >> tmpcard;
//
//              //if the card is not valid
//            if(!Card::isValid(tmpcard)){
//                std::cout<<"Invalid card, try again"<<std::endl;
//                std::cin>>tmpcard;
//            }
//            else{
//                //if the card is valid
//                Card result(tmpcard);
//                // finding the card in the hand
//                for (int i = 0; i < size(); i++){
//                    if(result == *at(i)){
//                        index = i;
//                        break;
//
//                    }
//
//                }
//                //if the card is not in the hand
//                if(index == -1){
//                    std::cout<<result<<" is no longer in your hand! "<<std::endl;
//                }
//
//                //human player has the card as the input
//                else{
//                    //if the player has the same suit as the lead card
//                    if(result.getSuit() != leadingTrmpCard.getSuit()){
//                        std::cout<<" You have one card of the same suit as the lead card, try again"<<Card::SuitName[leadingTrmpCard.getSuit()]<<std::endl;
//                        index=-1;
//                    }
//                    else{
//                        //removing the card from the hand
//                            result = *at(index);
//                            std::cout << Name << " played: " << result << std::endl;
//                            erase(begin() + index);
//                            return result;
//                    }
//                   }
//            }
//        }
//    }
//
//
//
//}
//
//
//
