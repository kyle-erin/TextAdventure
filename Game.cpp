#include "Game.h"
#include <iostream>

using namespace std;

void Game::WelcomePlayer()
{
  cout << "Welcome to Text Adventure!" << endl << endl;
  cout << "What is your name?" << endl << endl;

  string name;
  cin >> name;
  m_player.setName(name);

  cout << endl << "Hello " << m_player.getName() << endl;
}

void Game::GivePlayerOptions()
{
  cout << "What would you like to do? (Enter a corresponding number)" << endl << endl;
  cout << "1: Quit" << endl << endl;
}

void Game::GetPlayerInput(string &playerInput)
{
  cin >> playerInput;
}

PlayerOptions Game::EvaluateInput(string &playerInput)
{
  PlayerOptions option = PlayerOptions::None;

  if (playerInput.compare("1") == 0)
  {
    cout << "You have chosen to Quit!" << endl << endl;
    option = PlayerOptions::Quit;
  }
  else
  {
    cout << "I do not recognize that option, try again!" << endl << endl;
  }

  return option;
}

void Game::RunGame()
{
  WelcomePlayer();

  bool shouldEnd = false;
  while (!shouldEnd)
  {
    GivePlayerOptions();

    string input;
    GetPlayerInput(input);

    shouldEnd = EvaluateInput(input) == PlayerOptions::Quit;
  }
}