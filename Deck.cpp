//
// Created by Jack Bennett on 2022-11-29.
//

#include "Deck.h"
#include "Card.h"
using namespace std;
//constructor and deconstruct method calls
 Deck::Deck(){}
//deconstruct method
 Deck::~Deck(){
    while(!deck.empty()){
        deck.pop();
    }

 }

 //reset method
void Deck::reset(bool fullDeck) {
    //clears the deck
    while (!deck.empty()) {
        deck.pop();
    }
}

//construcor that calls the reset method to create a new deck
 Deck::Deck(bool fullDeck){
    reset(fullDeck);
 }



 //create deck
 void Deck::createDeck() {
//create a new deck
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            Card card(i, j);
            deck.push(card);
        }
    }

}

//shuffle deck
    void Deck::shuffleDeck(){
        for (int i = 0; i < 52; i++){ //shuffle the deck
            srand(time(0)); // seed random number generator
            int random = rand() % 52; // random number between 0 and 51
            Card temp = deck[i];
            deck[i] = deck[random];
            deck[random] = temp;
        }
    }


void Deck::print() const{
    for(unsigned int i = 0; i < size(); i++){
        cout<<*at(i)<<" ";
    }
    cout<<endl;
}


