#pragma once
#include "Room.h"
#define SIZE 5
class Maze
{
private:
	int _x, _y;
	Room** _maze;
public:
	Maze();
	~Maze();
	int getX();
	int getY();
	void printMaze() const;
};


