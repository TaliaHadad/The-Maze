#pragma once
#define EXTERNAL 0
#define INTERNAL 1
#define WALL 2
#define DOOR 3

class Partition
{
private:
	int _typePartition;
	int _kindPartiton;
public:
	void setTypePartition(int typePartition) { _typePartition = typePartition; }
	void setKindPartiton(int kindPartiton) { _kindPartiton = kindPartiton; }
	const int getTypePartition() const { return _typePartition; }
	const int getKindPartition() const { return _kindPartiton; }
	Partition(int typePartition, int kindPartiton);
	Partition();
};


