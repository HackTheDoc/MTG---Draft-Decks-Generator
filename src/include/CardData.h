#pragma once

#include <array>
#include <string>

enum CardColor {
    WHITE,
    BLACK,
    RED,
    GREEN,
    BLUE,
    COLORLESS
};

std::array<CardColor, 6> ALL_CARD_COLORS = {
    CardColor::WHITE,
    CardColor::BLACK,
    CardColor::RED,
    CardColor::GREEN,
    CardColor::BLUE,
    CardColor::COLORLESS
};

enum CardType {
    BASIC_LAND,
    LAND,
    CREATURE,
    ARTIFACT,
    ENCHANTMENT,
    PLANESWALKER,
    INSTANT,
    SORCERY
};

std::array<CardType, 8> ALL_CARD_TYPES = {
    CardType::BASIC_LAND,
    CardType::LAND,
    CardType::CREATURE,
    CardType::ARTIFACT,
    CardType::ENCHANTMENT,
    CardType::PLANESWALKER,
    CardType::INSTANT,
    CardType::SORCERY
};


