//
// // Jack Bennett 0370668//
//

#include "Game.h"

Card leadingTrmpCard; //card object for leading trump card
extern int CurScore; //current score of game

 //implementing game function
 Game::Game() {}


// this is also a option selection (computer player, human player)
void Game::selectPlayers(Deck &deck, vector<Player *> &plist) {
    bool arg_c= false; // option C
    bool arg_h= false; // option H

    //reading in input from user
    for(unsigned int arg_count=0; arg_count<this->size(); arg_count++){
        if(strcmp(this->at(arg_count), "-c")==0){
            arg_c=true;
        }
        if(strcmp(this->at(arg_count), "-h")==0){
            arg_h=true;
        }
    }

}

void Game::announceWinner() {

     //printing out winner of game
    std::cout<<"The winner is: "<<std::endl;
    //std::cout<<winner->getName()<<std::endl;

}

void Game::play(vector<Player*>& playerList, int maxScore, int currentHand){
     int winner = 0;
     int leader = 0;
     Card c[13]; //array of cards for every player

    //round starts for a 4 player game (13 cards)
    std::cout<< "these are everyones current hands "<<currentHand<<std::endl;
        //printing everyones hands
        for(int i =0; i<13; i++) {
        playerList[i]->print();
    }

        //  start of hand
        for(int handnum =1; handnum<=13; handnum++) {
            std::cout << "hand number: " << handnum << std::endl;
            //player 1 leading card
            c[0] = playerList[0]->leadingCrd();
            //player 2 leading card
            c[1] = playerList[1]->leadingCrd();
            //player 3 leading card
            c[2] = playerList[2]->leadingCrd();
            //player 4 leading card
            c[3] = playerList[3]->leadingCrd();

            //finding leading trump card
            for (int i = 0; i < 4; i++) {
                if (c[i].getSuit() == leadingTrmpCard.getSuit()) {
                    if (c[i].getRank() > leadingTrmpCard.getRank()) {
                        leadingTrmpCard = c[i];
                    }
                }
            }

            //player 1 playing card
            c[0] = playerList[0]->PlayCard(leadingTrmpCard);
            //player 2 playing card
            c[1] = playerList[1]->PlayCard(leadingTrmpCard);
            //player 3 playing card
            c[2] = playerList[2]->PlayCard(leadingTrmpCard);
            //player 4 playing card
            c[3] = playerList[3]->PlayCard(leadingTrmpCard);

            //finding leading trump card
            for (int i = 0; i < 4; i++) {
                if (c[i].getSuit() == leadingTrmpCard.getSuit()) {
                    if (c[i].getRank() > leadingTrmpCard.getRank()) {
                        leadingTrmpCard = c[i];
                    }
                }
            }
        }
}



