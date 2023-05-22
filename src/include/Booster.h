#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <nlohmann/json.hpp>

#include "Card.h"

class Booster {
private:
    std::unordered_map<std::string, std::vector<Card*>> cardsByName;

public:
    // a booster contain a maximum amount of 15 cards
    static const int MAX_CAPACITY = 15;

    Booster() = default;
    Booster(const nlohmann::json& j);

    Card* at(const std::string name);

    std::unordered_map<std::string, std::vector<Card*>>::iterator begin() noexcept;
    std::unordered_map<std::string, std::vector<Card*>>::iterator end() noexcept;
    std::unordered_map<std::string, std::vector<Card*>>::const_iterator begin() const noexcept;
    std::unordered_map<std::string, std::vector<Card*>>::const_iterator end() const noexcept;
};
