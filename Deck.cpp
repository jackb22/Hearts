//
// Created by Jack Bennett on 2022-11-29.
//

#include "Deck.h"
#include "Card.h"
#include<vector>

const string RankName = "23456789TJQKA";
const string SuitName = "SDCH";

using namespace std;
//constructor and deconstruct method calls
Deck::Deck(){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            string sCard = to_string(RankName[j]) + SuitName[i];
            this->push_back(new Card(static_cast<Card::Rank>(j), static_cast<Card::Suit>(i)));
        }
    }
}

//deconstruct method
Deck::~Deck(){
    while(!empty()){
        clear();
    }

}

//reset method
void Deck::reset(bool fullDeck) {
    //clears the deck
    while(!empty()){
        clear();
    }
    //create new deck
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            string sCard = to_string(RankName[j]) + SuitName[i];
            this->push_back(new Card(static_cast<Card::Rank>(j), static_cast<Card::Suit>(i)));
        }
    }

    Deck::shuffleDeck(); // shuiffle deck function

}

//construcor that calls the reset method to create a new deck
Deck::Deck(bool fullDeck){
    reset(fullDeck);

}





//shuffle deck
void Deck::shuffleDeck(){
    //using time to seed the random number generator
    srand((unsigned) time(nullptr));

    // Get a random number
    int random = rand();

    //for loop for shuffling the deck based on size of deck and random number
    for (int i = size() - 1; i > 0; i--) {
        const int j = random % 52; //random number
        Card* tmp = at(j); //temp card
        at(j) = at(i); //swapping cards
        at(i) = tmp; //swapping cards
    }

 }

// print deck method.
// prints card rank and card suit from Card Class 
void Deck::print() const {
    for(unsigned int i = 0; i < size(); i++){
       cout << Card::RankName[(*this)[i]->getRank()] << Card::SuitName[(*this)[i]->getSuit()] << " ";
    }
    cout<<endl;
}



