#include <iostream>
#include <vector>
#include <string>

void displayBoard(const std::string board[]);

void start();

void player_turn(std::string board[], char symbol, const std::string playerName);

bool checkForWin (const std::string board[], char symbol);

bool checkForDraw(const std::string board[]);