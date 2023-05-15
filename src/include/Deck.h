#pragma once

#include <nlohmann/json.hpp>

class Deck {
public:
    Deck();
    ~Deck();
    
    void save(nlohmann::json& j);
};
