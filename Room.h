#pragma once
#include "Partition.h"
#include<iostream>
using namespace std;

class Room
{
private:
	Partition* _arr;
	bool _kindRoom;
public:
	void setArr(Partition *arr) { _arr = arr;}
	void setKind();
	const Partition* getArr() const { return _arr; }
	const bool getKindRoom() const { return _kindRoom; }
	void printRoom() const;
	Room();
	~Room();
};

