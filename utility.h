//utility.h for utility functions in main

#include <iostream>
#include <string>
#include "players.h"
#include <vector>

#ifndef UTILITY_H
#define UTILITY_H

namespace utility{

    int getInputYN();

    void inputPlayer(std::vector<Player>& players);
    
    void writePlayersToFile(const std::vector<Player>& players, const std::string& filename);

}


#endif //UTILITY_H