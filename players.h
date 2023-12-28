//players.h defines player class

#ifndef PLAYERS_H
#define PLAYERS_H
#include <string>

class Player{

    public: 

    Player(const std::string& playerName, double vPIP);

    void setPlayerName(std::string& newName);
    void setVPIP(double newVPIP);
    void displayPlayer() const; //the const is here because displayPlayer doesn't modify anything in the object. This helps runtime I think



    private:

    std::string playerName;
    double vPIP;



};


#endif //players.h