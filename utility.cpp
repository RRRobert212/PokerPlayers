

#include <iostream>
#include <string>
#include "utility.h"
    
    
    
    int utility::getInputYN(){

        std::string userInput;
        std::getline(std::cin, userInput);

        if(userInput == "y" || userInput == "Y"){
            return 1;
        }
        else if(userInput == "n" || userInput =="N"){
            return 0;
        }
        else{return -1;}

    }