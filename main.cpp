// Jack Bennett 0370668//



#include <iostream>
#include "Card.h"
//#include "player.h"
#include "Deck.h"
//#include "HumanPlayer.h"


void cardTest() {
    Card c1 = Card();
    Card c2 = Card("QH");
    std::cout << c1 << "\n";
    std::cout << c2 << "\n";
}

void deckTest() {
    Deck d1 = Deck();
    d1.print();
}

void humanPlayerTest() {
  //HumanPlayer h1 = new HumanPlayer("Jack");

// HumanPlayer;



}

void computerPlayerTest() {}

void randomPlayerTest() {}

int main() {
    std::cout << Card();
    std::cout << "Hello, World!" << std::endl;
    cardTest();
    deckTest();
    return 0;
}