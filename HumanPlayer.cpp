//
// Created by Jack Bennett on 2022-11-29.
//


#include "HumanPlayer.h"

//human player constructor
HumanPlayer::HumanPlayer(string Name) : Player(Name) {}

//lets player pick any card to lead in the pile
Card HumanPlayer::leadingCrd()  {
    string tmpcard;; //temp string to hold card

    //printing current hand of human player
    cout << "Your hand: " << endl;
    this->print();

    //taking in card input //  validating input

    while(true) {
        cout << Name << " Pick a card to lead: " << endl;
        cin >> tmpcard; //getting card from user

        if (!Card::isValid(tmpcard)) { //if card is not valid
            cout << "Invalid input,  try again" << endl;
            cin >> tmpcard;
        } else{
            Card result(tmpcard); //creating card object
            for (int i = 0; i < size(); i++) {
                //if player has card in hand
                if (result == *at(i)) {
                    //remove card from hand
                    result = *at(i);
                    cout << Name << " played: " << result << endl;
                    erase(begin() + i);
                    return result;
                }

            }
            cout<<result<<" is no longer in your hand! "<<endl;
        }
    }
}


// lets player pick a card that is not on suit
Card HumanPlayer::noSuit() {
    string tmpcard; //temp string to hold card

    //taking in card from user / validating input
    while(true){
        cout << Name << " Pick a card you want to play: " << endl;
        cin >> tmpcard;
        if (!Card::isValid(tmpcard)) {
            cout << "Invalid card, try again" << endl;
            cin >> tmpcard;
        } else{
            Card result(tmpcard);
            for (int i = 0; i < size(); i++) {
                if (result == *at(i)) {
                    result = *at(i);
                    cout << Name << " played: " << result << endl;
                    erase(begin() + i);
                    return result;
                }

            }
            cout<<result<<" is no longer in your hand! "<<endl;
        }
    }
}


//lets player pick a card that is on suit
Card HumanPlayer::followingSuit(Card card) {
    string tmpcard; //temp string to hold card

    //taking in card from user / validating input
    while(true){
        cout << Name << " Pick a card you want to play: " << endl;
        cin >> tmpcard;
        if (!Card::isValid(tmpcard)) {
            cout << "Invalid card, try again" << endl;
            cin >> tmpcard;
        } else{
            Card result(tmpcard);
            for (int i = 0; i < size(); i++) {
                if (result == *at(i)) {
                    result = *at(i);
                    cout << Name << " played: " << result << endl;
                    erase(begin() + i);
                    return result;
                }

            }
            cout<<result<<" is no longer in your hand! "<<endl;
        }
    }
}

