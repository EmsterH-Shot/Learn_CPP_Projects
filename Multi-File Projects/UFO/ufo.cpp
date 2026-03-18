#include <iostream>
#include "ufo_functions.hpp"

int main() {

  greet();

  std::string codeword = "codecademy";
  std::string answer = "__________";

  int misses = 0;

  std::vector<char> incorrect;
  bool guess = false;

  char letter;

  while(answer != codeword && misses < 7) {
    
    display_misses(misses);
    display_status(incorrect, answer);

    std::cout << "Please enter your guess:\n";
    std::cin >> letter;
    for(int i = 0; i < codeword.length(); i++) {
      
      if(codeword[i] == letter) {

        answer[i] = letter;
        guess = true;

      }

    }

    misses++;

  }

  end_game(answer, codeword);

}
