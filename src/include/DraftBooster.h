#pragma once

#include <set>
#include <nlohmann/json.hpp>

#include "Card.h"

class DraftBooster {
private:
    std::set<Card*> cards;

public:
    DraftBooster();
    ~DraftBooster();

    void load(nlohmann::json& data);
    std::set<Card*>& peek();
};
