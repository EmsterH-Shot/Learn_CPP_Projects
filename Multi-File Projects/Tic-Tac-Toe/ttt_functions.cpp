#include <iostream>
#include <vector>
#include <string>

//creating the board:
void displayBoard(const std::string board[]) {
    std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << "\n";
    std::cout << "===========\n";
    std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << "\n";
    std::cout << "===========\n";
    std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << "\n";
};


//starting the game:
void start() {

  std::cout << "====================================\n";
  std::cout << "Tic-Tac-Toe\n";
  std::cout << "====================================\n";
  std::cout << "INSTRUCTIONS:\n";
  std::cout << "You and your opponent each want to get three X's or O's in a row (diagonally, horizontally, or vertically) to win!\n\n";
  std::cout << "Player X will fill the board with X's, while Player O will fill the board with O's.\n"; 
  std::cout <<"The board is 3x3 for a total of 9 spaces, and is currently blank.\n\n";

};

//checking for a win:
bool checkForWin(const std::string board[], char symbol, const std::string playerName) {
    //top-horizontal win:
    if ((board[0] == std::string(1, symbol) && board[1] == std::string(1, symbol) && board[2] == std::string(1, symbol)) ) {
        std::cout << playerName << " WINS! Congrats!!\n";
        return true; 
    }
    //middle-horizontal win:
    else if(board[3] == std::string(1, symbol) && board[4] == std::string(1, symbol) && board[5] == std::string(1, symbol)) {
        std::cout << playerName << " WINS! Congrats!!\n";
        return true; 
    }
    //right-horizontal win:
    else if(board[6] == std::string(1, symbol) && board[7] == std::string(1, symbol) && board[8] == std::string(1, symbol)) {
        std::cout << playerName << " WINS! Congrats!!\n";
        return true; 
    }
    //left-vertical win:
    else if(board[0] == std::string(1, symbol) && board[3] == std::string(1, symbol) && board[6] == std::string(1, symbol)) {
        std::cout << playerName << " WINS! Congrats!!\n";
        return true; 
    }
    //center-vertical win:
    else if(board[1] == std::string(1, symbol) && board[4] == std::string(1, symbol) && board[7] == std::string(1, symbol)) {
        std::cout << playerName << " WINS! Congrats!!\n";
        return true;
    }
    //right-vertical win:
    else if(board[2] == std::string(1, symbol) && board[5] == std::string(1, symbol) && board[8] == std::string(1, symbol)) {
        std::cout << playerName << " WINS! Congrats!!\n";
        return true; 
    }
    //diagonal win (top left to right bottom):
    else if(board[0] == std::string(1, symbol) && board[4] == std::string(1, symbol) && board[8] == std::string(1, symbol)) {
        std::cout << playerName << " WINS! Congrats!!\n";
        return true; 
    }
    //diagonal win (top right to left bottom):
    else if(board[2] == std::string(1, symbol) && board[4] == std::string(1, symbol) && board[6] == std::string(1, symbol)) {
        std::cout << playerName << " WINS! Congrats!!\n";
        return true; 
    }
    else
        return false; 
};

//checking for draw:
bool checkForDraw(const std::string board[]) {
  if (
    (board[0] != " ") && (board[1] != " ") && (board[2] != " ") && (board[3] != " ") && (board[4] != " ") && (board[5] != " ") && (board[6] != " ") && (board[7] != " ") && (board[8] != " ")
    ) {
      std::cout << "Aww, it's a draw... Better luck next time!";
      return true;
    } 
    return false;
};

//receiving player input:
void player_turn(std::string board[], char symbol, const std::string playerName) {
    bool validInput = false;
    
    while (validInput == false) {
        std::cout << playerName << ", it's your turn!\n";
        std::cout << "Where do you want to place your " << symbol << "? Counting left to right and top to bottom for each space, please enter a number 1-9.\n";

        int player_input;

        std::cin >> player_input;

        //checking if input is valid:
        if (player_input < 1 || player_input > 9) {
            std::cout << "Invalid number. Please try again.\n";
            displayBoard(board);
        }
        else {
            int index = (player_input - 1);

            //checking if space on board is available:
            if (board[index] == " " || board[index] == " \n") {

                  board[index] = symbol;
                  displayBoard(board);
                  validInput = true;

                //checking for win after each turn:
                if (checkForWin(board, symbol, playerName)) {
                  return;
                }
            }
            else {
                //if space on board has been taken:
                std::cout << "Position already occupied. Please try again.\n";
                displayBoard(board);
            }
        }
    }

    //checking for draw after ALL spaces are taken
    if (checkForDraw(board)) {
      return;
    }

    // switching to other player's turn:
    if (validInput == true && symbol == 'X') {
      player_turn(board, 'O', "Player O");
    }
    else if (validInput == true && symbol == 'O') {
      player_turn(board, 'X', "Player X");
    }
};



