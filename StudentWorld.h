#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GameWorld.h"
#include "GameConstants.h"
#include <string>
#include <vector>

// Students:  Add code to this file, StudentWorld.cpp, Actor.h, and Actor.cpp
#include "Actor.h"
class StudentWorld : public GameWorld
{
public:

	StudentWorld(std::string assetDir)
		: GameWorld(assetDir)
	{
	}

	virtual int init()
	{
		for (int x = 0;x < 64;x++) {
			for (int y = 0;y < 59;y++) {
				i[x][y] = new Ice(x, y);
			}
		}
		
		std::vector<GameObj*> Obj;

		return GWSTATUS_CONTINUE_GAME;
	}

	virtual int move()
	{
		for (int x = 0;x < 64;x++) {
			for (int y = 0;y < 59;y++) {
				i[x][y]->doSomething();
			}
		}
		
		// This code is here merely to allow the game to build, run, and terminate after you hit enter a few times.
		// Notice that the return value GWSTATUS_PLAYER_DIED will cause our framework to end the current level.
		//decLives();
		return GWSTATUS_CONTINUE_GAME; //GWSTATUS_PLAYER_DIED;
	}

	virtual void cleanUp()
	{
	}

private:
	Ice* i[64][59];
};

#endif // STUDENTWORLD_H_
