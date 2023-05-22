#pragma once

#include <iostream>
#include <string>
#include <unordered_map>
#include <nlohmann/json.hpp>

#include "Card.h"

class Deck {
private:

    int id;
    std::unordered_map<std::string, std::pair<int, Card*>> cards;
    int size;

public:
    // a deck contain a maximum amount of 40 cards
    static const int MAX_CAPACITY = 40;

    Deck();
    ~Deck();

    void save(nlohmann::json& j); 

    friend std::ostream& operator<<(const std::ostream& stream, Deck& deck);
};
