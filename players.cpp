#include "players.h"
#include <iostream>

Player::Player(const std::string& name, double vPIP)
    : playerName(name), vPIP(vPIP) {

    }

void Player::setPlayerName(std::string& newName){

    playerName = newName;
}

void Player::setVPIP(double newVPIP){

    vPIP = newVPIP;
}

void Player::displayPlayer() const{

    std::cout << "Player: " << playerName << ", VPIP: " << vPIP << ".\n";

}