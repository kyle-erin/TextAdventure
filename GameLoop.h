//
// Created by v-kyphil on 6/2/2016.
//
#pragma once

#include "Player.h"
#include "PlayerOptions.h"

namespace GameLoop
{
  void WelcomePlayer(Player& player);

  void GivePlayerOptions();

  void GetPlayerInput(std::string& playerInput);

  bool RunGame();
};


