/*
Rock Paper Scissors Lizard Spock
(from "The Big Bang Theory")
*/

#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));

  int computer = rand() % 5 + 1;
  int user = 0;

  std::cout << "Rock, Paper, Scissors, Lizard, Spock...\n\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🤏\n";
  std::cout << "5) 🖖\n\n";

  std::cout << "SHOOT!\n";

  std::cin >> user;

  if (user == 1) {

    std::cout << "You chose ✊\n";

  } else if (user == 2) {

    std::cout << "You chose ✋\n";

  } else if (user == 3) {

    std::cout << "You chose ✌️\n";

  } else if (user == 4) {

    std::cout << "You chose 🤏\n";

  } else {

    std::cout << "You chose 🖖\n";

  }

  
  if (computer == 1) {

    std::cout << "CPU chose ✊\n";

  } else if (computer == 2) {

    std::cout << "CPU chose ✋\n";

  } else if (computer == 3) {

  std::cout << "CPU chose ✌️\n";

  } else if (computer == 4) {

  std::cout << "CPU chose 🤏\n";

  } else {

    std::cout << "CPU chose 🖖\n";

  }

  
  if (user == computer) {

  std::cout << "It's a tie!\n";

  // User chose rock:

  } else if (user == 1) {
    
    if (computer == 2) {

      std::cout << "✋ covers ✊\n";
      std::cout << "Better Luck Next Time\n";

    }
    if (computer == 3) {

      std::cout << "✊ crushes ✌️\n";
      std::cout << "~Congrats~\n";

    } if (computer == 4) {

      std::cout << "✊ crushes 🤏\n";
      std::cout << "~Congrats~\n";

    } if (computer == 5) {

      std::cout << "🖖 vaporizes ✊\n";
      std::cout << "Better Luck Next Time\n";

    }

    
    // User chose paper:

    } else if (user == 2) {
      
      if (computer == 1) {

      std::cout << "✋ covers ✊\n";
      std::cout << "~Congrats~\n";

    } if (computer == 3) {

      std::cout << "✌️ cut ✋\n";
      std::cout << "Better Luck Next Time\n";
  
    } if (computer == 4) {

      std::cout << "🤏 eats ✋\n";
      std::cout << "Better Luck Next Time\n";

    } if (computer == 5) {

      std::cout << "✋ disproves 🖖\n";
      std::cout << "~Congrats~\n";

    }

    
    // User chose scissors:

    } else if (user == 3) {
      if (computer == 1) {

      std::cout << "✊ crushes ✌️\n";
      std::cout << "Better Luck Next Time\n";

    } if (computer == 2) {

      std::cout << "✌️ cuts ✋\n";
      std::cout << "~Congrats~\n";
  
    } if (computer == 4) {

      std::cout << "✌️ decapitate 🤏\n";
      std::cout << "~Congrats~\n";

    } if (computer == 5) {

      std::cout << "🖖 smashes ✌️\n";
      std::cout << "Better Luck Next Time\n";

    }


    // User chose lizard:

    } else if (user == 4) {
      
      if (computer == 1) {

      std::cout << "✊ crushes 🤏\n";
      std::cout << "Better Luck Next Time\n";

    } if (computer == 2) {

      std::cout << "🤏 eats ✋\n";
      std::cout<< "~Congrats~\n";

    } if (computer == 3) {

      std::cout << "✌️ decapitate 🤏\n";
      std::cout << "Better Luck Next Time\n";

    } if (computer == 5) {

      std::cout << "🤏 poisons 🖖\n";
      std::cout << "~Congrats~\n";

    }

    
    // User chose Spock:

    } else if (user == 5) {
      
      if (computer == 1) {

      std::cout << "🖖 vaporizes ✊\n";
      std::cout << "~Congrats~\n";

    } if (computer == 2) {

      std::cout << "✋ disproves 🖖\n";
      std::cout << "Better Luck Next Time\n";

    } if (computer == 3) {

      std::cout << "🖖 smashes ✌️\n";
      std::cout << "~Congrats~\n";

    } if (computer == 4) {

      std::cout << "🤏 poisons 🖖\n";
      std::cout << "Better Luck Next Time\n";

    }
  }
}
