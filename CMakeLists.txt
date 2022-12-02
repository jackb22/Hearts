cmake_minimum_required(VERSION 3.23)
project(Hearts)

set(CMAKE_CXX_STANDARD 14)

add_executable(Hearts main.cpp Card.cpp Card.h Deck.cpp Deck.h Player.cpp Player.h HumanPlayer.cpp HumanPlayer.h ComputerPlayer.cpp ComputerPlayer.h RandomPlayer.cpp RandomPlayer.h cardTest.cpp)
