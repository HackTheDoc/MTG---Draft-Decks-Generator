#pragma once

#include <set>
#include <string>
#include <optional>

#include <CardData.h>

class Card {
private:
    std::string name;
    std::string text;

    std::set<CardType> types;
    std::set<CardColor> colorIdentity;
    uint8_t manaCost;

    std::optional<int8_t> power;
    std::optional<int8_t> thougness;

public:
    Card();
    ~Card();

    bool hasType(const std::string& type);
};
