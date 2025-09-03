#include <iostream>

// A text-based, choose-your-own-adventure game, based on a time in my dog's life when he was getting older and wanting his dinner much ealier in the day than he'd had before!
int main () {

    // Beginning:
    std::cout << "Woof woof! My name is Benji, an adorable shi-poo dog.\n";
    std::cout << "I'm about 69 in doggo years, and as I've gotten older, I've been getting hungry for dinner earlier--like those old humans who go to resturaunts for the Early Bird Special!\n";
    std::cout << "My quest involves getting Mum to feed me at my new preferred dinnertime, 3:30.\n\n";


    // First Question: Help Benji or no?
    std::cout << "Can you help me eat before the sun goes down? Pretty please??\n\n";
    std::cout << "1) Of course!\n";
    std::cout << "2) Nah.\n";

    int answer_beginning;
    std::cin >> answer_beginning;

    // User chooses to help Benji
    if (answer_beginning == 1) {

        std::cout << "Yay!! Let's get started.\n\n";


    } else {

    // User chooses not to help Benji, END 1

        std::cout << "Fine, be a big meanie. Grrr, see if I care. Hmph!\n\n";
        std::cout << "~THE END~\n";
        std::cout << "Ending 1 (BAD END): Guess You're More Of A Cat Person :(";

        return 0;

    }


    // Story continues after user chooses to help Benji
   std::cout << "First things first: we need to actually locate the Mum herself!\n";
   std::cout << "*sniff-sniff, sniff-sniff*\n";
   std::cout << "Hmm, my sniffer ain't what it used to be when was a young puppo!\n\n";
  
// Second Question: Where should Benji look for Mum?


   std::cout << "Where do you think we should look for Mum?\n\n";


   std::cout << "1) Living Room\n";
   std::cout << "2) Kitchen\n";
   std::cout << "3) Office\n";


   int answer_mumsearch;


   std::cin >> answer_mumsearch;


   while (answer_mumsearch != 3) {


       // User chooses to search the living room


       if (answer_mumsearch == 1) {


       std::cout << "Alrighty, let's see...\n";
       std::cout << "...Hmm, I don't think the Mum is here! But my biscuit crumbs are! Mum says bad words when she steps on them in her bare feet. I don't get what the issue is, though. They're delicious!\n";
       std::cout << "Anyway, let's try again...\n\n";


       std::cout << "Where do you think we should look for Mum?\n\n";


   std::cout << "1) Living Room\n";
   std::cout << "2) Kitchen\n";
   std::cout << "3) Office\n";


   std::cin >> answer_mumsearch;


   }


// User chooses to search the kitchen


   else {


       std::cout << "Alrighty, let's see...\n";
       std::cout << "...Hmm, I don't think the Mum is here! But boy, does the magic grey box smell good or what! I think they call it a 'fridge'... When I die, I want to come back as one of those. That's where all the good human food is kept!\n";
       std::cout << "Anyway, let's try again...\n\n";


       std::cout << "Where do you think we should look for Mum?\n\n";


   std::cout << "1) Living Room\n";
   std::cout << "2) Kitchen\n";
   std::cout << "3) Office\n";


   std::cin >> answer_mumsearch;


   }


   }


// User chooses to search the office


   if (answer_mumsearch == 3) {


       std::cout << "Alrighty, let's see...\n";
       std::cout << "THERE she is! Sitting at her desk!\n";
       std::cout << "So now, I'd say we have two ways of going about this...\n\n";
      
       std::cout << "Should I beg by barking like heck until she caves, or should I try to look as pitiful as possible by silently heaving my bosom and giving her the Puppy Eyes?\n\n";


       std::cout << "1) Bark like heck!\n";
       std::cout << "2) Silently heave your bosom and give her the Puppy Eyes!\n";


       int answer_beg;


       std::cin >> answer_beg;


// User chooses to bark, END 2


   if (answer_beg == 1) {


       std::cout << "Alright, I can do that! I have YEARS of experience from barking at cars, and leaves, and mail-delivery people... Anyway, here goes nothing!\n\n";


       std::cout << "*BARKBARKBARKBARKBARKBARKBARKBARKBARKBARKBARKBARKBARKBARKBARKBARKBARBKBAJJBJKAJAHREHAJGAOJGAEOGHWEOHGEAROIGHWEAOIHREOIFHEIY3H9PW4*\n\n";


       std::cout << "........etc, etc.\n\n";


       std::cout << "What's this? I'm being picked up...\n";
       std::cout << "And now I'm being put outside??\n";
       std::cout << "What an outrage! A disgrace! A true injustice against all Senior Doggo Kind!\n";
       std::cout << "I refuse to stand for this! I can bark like heck, which means I can protest like heck! I'll--\n\n";


       std::cout << "Whoa what's that? A bunny rabbit right outside the fence?? Ooooh, I'll show them...!\n\n";


       std::cout << "........................\n\n";


       std::cout << "Hmm? Oh dear, I seem to have fallen asleep outside, it's nearly dark out! Boy, barking at wild animals is hard work!\n";
       std::cout << "Worse yet, I'm STARVING!! There's no way it's before my desired dinner time, 3:30!\n";
       std::cout << "Oh no! Did they forget about me? Am I an abandonned doggo--!?\n\n";


       std::cout << "...Oh, waitaminute! I'm being let back in...\n\n";


       std::cout << "*GASP*! And there's my dinner!! Yipeeeeeee!\n";
       std::cout << "*NOMNOMNOM*...\n\n";


       std::cout << "Sigh, oh well. We did our best, didn't we? Thanks for trying to help me out anyway! We'll get that Early Bird Special next time!\n\n";


       std::cout << "~THE END~\n";
       std::cout << "Ending 2 (NEUTRAL END): Not-So-Early Bird Special--Regular Dinner Time -_-";


       return 0;




// User chooses to give Puppy Eyes, END 3


   } else {


       std::cout << "Alright, I can do that! I have YEARS of experience from begging at Thanksgiving and other big holiday dinners. My Puppy Eyes are a real charmer--they work every time!\n";
       std::cout << "Anyway, here goes nothing!\n\n";


       std::cout << "🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺\n";
       std::cout << "🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺\n";
       std::cout << "🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺\n";
       std::cout << "🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺\n";
       std::cout << "🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺🥺\n\n";


       std::cout << "...She's starting to take notice... I think she's giving me a pitying look!\n";
       std::cout << "Now she's getting up from her chair... and giving me a pat on the head.\n";
       std::cout << "C'mon, lady! Back that sad face up with some food!!\n\n";


       std::cout << "Oh! Now she's going into the kitchen... And picking up my bowl...!\n";
       std::cout << "Even though it's hard, all I can do is wait to see what happens next...\n\n";


       std::cout << "😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤😤\n\n";


        std::cout << "*GASP*! And there's my dinner!! Yipeeeeeee!\n";
       std::cout << "*NOMNOMNOM*...\n\n";


       std::cout << "Thank you sooooo much, human! We did it!!!\n";
       std::cout << "And uh, no, I ain't sharing. Don't be silly. *NOMNOMNOM*...\n\n";


       std::cout << "~THE END~\n";
       std::cout << "Ending 3 (GOOD END): Early Bird Special--Bon Appetit! :D\n";


       return 0;


   }




   }






}
