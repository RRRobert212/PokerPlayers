//main.cpp

#include "players.h"
#include "utility.h"
#include <iostream>
#include <string>
#include <vector>


int main(){

    std::vector<Player> players;

    //loop to add players
    while (true){

        std::cout << "Would you like to add a player? (Y/N).\n";

        int input = utility::getInputYN();
        
        if(input == 1){
            utility::inputPlayer(players);}

            


        else{std::cout << "Alright! Displaying all players:\n"; 
        
            //iterates through players vector and prints them all
            for(const Player &player : players)
            {
                player.displayPlayer();
            }
        
            break;}


    }


    std::cout << "Enter the filename to write player data to (eg. players.txt): ";

    std::string file;

    std::getline(std::cin, file);
    
    utility::writePlayersToFile(players, file);


    return 0;
}