#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"

// Students:  Add code to this file, Actor.cpp, StudentWorld.h, and StudentWorld.cpp

class GameObj {
public:
	//GameObj(int xCord, int yCord) { x = xCord;y = yCord; }
	virtual void doSomething() {
		
	}
private:
	int x;
	int y;
};

class Ice: GameObj {
public:
	Ice(int x, int y) { 
		IceState = new GraphObject(IID_ICE, x, y, GraphObject::none, size, depth);

	}
	void doSomething() {
		IceState->setVisible(vis);
	}
private:
	bool vis = true;
	double size = 0.5;
	int depth = 0;
	GraphObject* IceState;
};

class Player : GameObj {

};

#endif // ACTOR_H_
