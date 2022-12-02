#include <iostream>
#include "Card.h"
#include "Deck.h"


void cardTest() {
    Card c1 = Card();
    Card c2 = Card("QH");
//    Card c3 = Card(Card::Rank[5], Card::Suit[2]);

    std::cout << c1 << "\n";
    std::cout << c2 << "\n";
//    std::cout << c3 << "\n";
}

void deckTest() {
    Deck d1 = Deck();

    d1.print();
}

int main() {
    std::cout << Card();
    std::cout << "Hello, World!" << std::endl;
    cardTest();
    deckTest();
    return 0;
}