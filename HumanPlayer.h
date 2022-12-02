//
// Jack Bennett 0370668//
//

#ifndef HEARTS_HUMANPLAYER_H
#define HEARTS_HUMANPLAYER_H
#include "Player.h"
#include "Card.h"

class HumanPlayer : public Player {
private:
    //virtual functions for player / computer picking card
     Card leadingCrd() = 0; // picking the leading card
     Card followingSuit(Card) = 0;  // picking the following suit matching card
     Card  noSuit()  = 0;  //picks any card if no matching suit is available

public:
    //constructor
    explicit HumanPlayer(  std::string Name);


};


#endif //HEARTS_HUMANPLAYER_H
