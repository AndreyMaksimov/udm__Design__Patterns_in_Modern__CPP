/*
Observer Coding Exercise
Imagine a game where one or more rats can attack a player. Each individual rat has an attack  value of 1.
However, rats attack as a swarm, so each rat's attack  value is equal to the total number of rats in play.

Given that a rat enters play through the constructor and leaves play (dies) via its destructor,
please implement the Game  and Rat  classes so that, at any point in the game,
the attack  value of a rat is always consistent.

*/



#if 1 // Solution

#include <iostream>
#include <vector>
using namespace std;

struct Game
{
    // todo
};

struct Rat : IRat
{
    Game& game;
    int attack{1};

    Rat(Game &game) : game(game)
    {
        // todo, obviously
    }

    ~Rat()
    {
        // rat dies here!
    }
};

#else // Initial

#include <iostream>
#include <vector>
using namespace std;

struct Game
{
    // todo
};

struct Rat : IRat
{
    Game& game;
    int attack{1};

    Rat(Game &game) : game(game)
    {
        // todo, obviously
    }

    ~Rat()
    {
        // rat dies here!
    }
};

#endif
