//
// // Jack Bennett 0370668//
//
#include<cstdlib>
#include<fstream>
#include "Deck.h"
#include "HumanPlayer.h"
//#include "RandomPlayer.h"

#ifndef HEARTS_GAME_H
#define HEARTS_GAME_H



class Game : public std::vector<const char*> {
public:

    //default constructor
    Game();

    //deconstructor
    ~Game();

    //select players for game
    void selectPlayers(Deck& deck, vector<Player*>& plist);

    //play game function
    void play(vector<Player*>&, int, int);

    //function to announce winner of game
    void announceWinner();


    using vector<const char*>::push_back;
    using vector<const char*>::size;
    using vector<const char*>::at;
    using vector<const char*>::begin;
    using vector<const char*>::empty;
    using vector<const char*>::erase;
    using vector<const char*>::clear;



};


#endif //HEARTS_GAME_H
