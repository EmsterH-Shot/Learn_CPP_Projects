#include <iostream>
#include "ttt_functions.hpp"
#include <string>

int main() {

  start();

  std::string board[] = {" ", " ", " ", " ", " ", " ", " ", " ", " ",};

  displayBoard(board);

  player_turn(board, 'X', "Player X");

};