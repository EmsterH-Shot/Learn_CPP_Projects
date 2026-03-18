#include <iostream>
#include <string>


#include "functions.hpp"


int main() {


 std::string word = "broccoli";


 std::string sentence = "I actually really like broccoli. I only like broccoli when it's fresh and cooked though, I can't stand raw broccoli. Oh, and cooked broccoli's gotta be served with butter or some other kind of sauce, in order to add some much-needed moisture to the broccoli.";


 bleep(word, sentence);


 for (int i = 0; i < sentence.size(); i++) {


   std::cout << sentence[i];


 }


 std::cout << "\n";


}
