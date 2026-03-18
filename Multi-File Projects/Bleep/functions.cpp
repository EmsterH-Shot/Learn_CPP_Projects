#include <string>


void asterisk(std::string word, std::string &broccoli, int i) {


 for (int k = 0; k < word.size(); ++k) {


   broccoli[i+k] = '*';


 }


}


void bleep(std::string word, std::string &broccoli) {


 for (int i = 0; i < broccoli.size(); ++i) {


   int match = 0;


   for (int j = 0; j < word.size(); ++j)


     if (broccoli[i+j] == word[j]) {


       ++match;


     }


     if (match == word.size()) {


     asterisk(word, broccoli, i);


     }


 }


}
