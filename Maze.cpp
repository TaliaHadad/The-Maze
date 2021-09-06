#include "Maze.h"
Maze::Maze()
{
	_x = 3;
	_y = 2;
	//allocate memory for 5*6 matrix
	_maze = new Room* [3];
	for (int i = 0; i < _x; ++i)
		_maze[i] = new Room[2];	
			
}
Maze::~Maze()
{
	for (int i = 0; i < _x; i++)
		delete[] _maze[i];
	delete[] _maze;
}
int Maze::getX()
{
	return _x;
}
int Maze::getY()
{
	return _y;
}
void Maze::printMaze() const
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			_maze[i][j].printRoom();
		}
	}
}