#pragma once

#include <iostream>
#include <set>
#include <string>

#include "CardData.h"

/*
{
    "name": "Raptor équarisseur",
    "manaCost": "2{W}",
    "convertedManaCost": 3,
    "colors": [
        "White"
    ],
    "colorIdentity": [
        "W"
    ],
    "type": "Creature - phyrexian oiseau",
    "subtypes": [
        "phyrexian",
        "oiseau"
    ],
    "text": "Vol\nToxique 1 (Les joueurs qui subissent des blessures de combat de cette créature gagnent aussi un marqueur « poison ».)\nQuand le Raptor équarrisseur arrive sur le champ de bataille, une autre créature ciblée que vous contrôlez avec le toxique gagne +1/+1 et acquiert le vol jusqu'à la fin du tour.",
    "capacities": [
        "vol",
        "toxique 1"
    ],
    "loyalty": null,
}
*/

class Card {
private:
    std::string name;
    std::string text;

    // card type (ex: creature)
    std::set<CardType> types;
    // subtype of a card (ex: Bird)
    std::set<std::string> subtypes;
    std::set<CardColor> colorIdentity;
    int convertedManaCost;

public:
    /// @brief Create an blank card with no properties
    Card();
    ~Card();

    /// @brief Create the card by giving it properties
    /// @param name name of the card
    /// @param text text that descripe the card
    /// @param types a set containing every type of the card
    /// @param colorIdenity a set containing every color of the card (default: {COLORLESS})
    void create(std::string name, std::string text, std::set<CardType> types, std::set<CardColor> colorIdenity = {CardColor::COLORLESS});

    void addType(CardType t);
    void addColor(CardColor c);

    /// @brief Check if the card have a specific type or not
    /// @param type type we want to check
    /// @return true if the card have this type, else false
    bool hasType(const std::string& type);
    /// @brief Check if the card have a specific color or not
    /// @param color color we want to check
    /// @return true if the card have this color, else false
    bool hasColor(const std::string& color);

    std::string getName();
    std::string getText();
    std::string getManaCost();

    friend std::ostream& operator<<(const std::ostream& stream, const Card& card);
};
