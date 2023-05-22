#include "include/Booster.h"

Booster::Booster(const nlohmann::json& j) {
    // TODO load a booster from a json data structure
}

Card* Booster::at(const std::string name) {
    // TODO return appriopriate card
    return nullptr;
}

std::unordered_map<std::string, std::vector<Card*>>::iterator Booster::begin() noexcept {
    return cardsByName.begin();
}

std::unordered_map<std::string, std::vector<Card*>>::iterator Booster::end() noexcept {
    return cardsByName.end();
}

std::unordered_map<std::string, std::vector<Card*>>::const_iterator Booster::begin() const noexcept {
    return cardsByName.cbegin();
}

std::unordered_map<std::string, std::vector<Card*>>::const_iterator Booster::end() const noexcept {
    return cardsByName.cend();
}

