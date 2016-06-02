#include <iostream>
#include <string>
#include "GameLoop.h"
#include "Player.h"

using namespace std;

int main()
{
  Player p;
  GameLoop::WelcomePlayer(p);

  bool isPlaying = true;
  while(isPlaying)
  {
    isPlaying = GameLoop::RunGame();
  }

  return 0;
}