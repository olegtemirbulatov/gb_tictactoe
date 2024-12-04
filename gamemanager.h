#pragma once
#include <string>
#include "game.h"

class GameManager
{
public:
    GameManager() = default;
    ~GameManager() = default;

    IGame* createGame(const std::string &name) const;
};