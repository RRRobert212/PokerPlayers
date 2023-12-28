//main.cpp

#include "players.h"
#include "utility.h"
#include <iostream>
#include <string>


int main(){


    while (true){

        std::cout << "Would you like to add a player? (Y/N).\n";

        int input = utility::getInputYN();

        if(input = 1){std::cout << "success"; break;}
        else{std::cout << "fail"; break;}





    }



    Player Cal("Cal", 0.36);

    Cal.displayPlayer();

    


    return 0;
}