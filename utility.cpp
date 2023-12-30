//utility.cpp

#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include <fstream>
#include "players.h"
#include "utility.h"
    
    
    
int utility::getInputYN() {

    while(true){

    std::string userInput;
    
    std::getline(std::cin, userInput);

    if (userInput == "y" || userInput == "Y") {
        return 1;
    } else if (userInput == "n" || userInput == "N") {
        return 0;
    } else { std::cout << "Please enter either \"Y\" or \"N\": ";
        
    }

    }
}

void utility::inputPlayer(std::vector<Player>& players){
    //get name
    std::cout << "Enter player name: ";
    std::string inputName;
    std::getline(std::cin, inputName);

    //get vPIP
    double vPIP;
    while (true) {
        std::cout << "\nEnter " << inputName << "'s VPIP (as a decimal eg. 0.45): ";
        if (std::cin >> vPIP) {
            // Input is a valid double
            // Clear the input buffer to handle any remaining characters
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        } else {
            // Input is not a double, clear the error flag
            std::cin.clear();
            // Ignore invalid input up to the newline character
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid decimal.\n";
        }
    }

    //create player object from name and vpip and add as an element of players vector
    players.push_back(Player(inputName, vPIP));
}


void utility::writePlayersToFile(const std::vector<Player>& players, const std::string& filename) {
    std::ofstream outputFile(filename);
    if (outputFile.is_open()) {
        for (const Player& player : players) {
            outputFile << "Player: " << player.getPlayerName() << ". VPIP: ";
            outputFile << player.getVPIP() << ".\n";
        }
        outputFile.close();
        std::cout << "Players written to file: " << filename << "\n";
    } else {
        std::cout << "Error opening file: " << filename << "\n";
    }
}


