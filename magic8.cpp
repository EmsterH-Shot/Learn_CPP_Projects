#include <iostream>
#include <cstdlib>

// Mimicking a Magic 8 Ball, this program will print a different response to the user's assumed question depending on a randomly generated integer between 0-8
int main() {

    // Your future is here:
    std::cout << "MAGIC 8-BALL:\n\n";

    srand(time(NULL));

    int answer = std::rand() % 10;

    std::cout << answer;

    if (answer == 0) {

        std::cout << "Definitely!\n";

    }
    else if (answer == 1) {

        std::cout << "Yeah, sure. Why not?\n";

    }
    else if (answer == 2) {

        std::cout << "Probably.\n";

    }
    else if (answer == 3) {

        std::cout << "Lookin' gooooooood!!\n";
   
    }
    else if (answer == 4) {

        std::cout << "IDK bud, haven't had my coffee yet.\n";

    }
    else if (answer == 5) {

        std::cout << "You're not meant to know at this time. For, uh, spiritual reasons. I think.\n";

    }
    else if (answer == 6) {

        std::cout << "Red flag, red flag! Run for the hills!\n";
 
    }
    else if (answer == 7) {

        std::cout << "My guess would be a big ol' NOPE.\n";

    }
    else if (answer == 8) {

        std::cout << "Nah.\n";

    }
    else {

        std::cout << "Highly doubt it.\n";

    }

}
