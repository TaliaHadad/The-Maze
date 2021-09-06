#include "Room.h"

void Room::setKind()
{
	for (int i = 0; i < 4; i++)
	{
		if (_arr[i].getKindPartition() == EXTERNAL)
		{
			_kindRoom = EXTERNAL;
			return;
		}
	}
	_kindRoom = INTERNAL;
};
void Room::printRoom() const
{
	for (int i = 0; i < 10; i++)
	{
			if (getArr()[0].getTypePartition() == DOOR)
			{
				cout << "*"<<" ";
			}
			else
			{
				cout << "^"<<" ";
			}
	}
	cout << endl;
	for (int i = 0; i < 8; i++)
	{
			if (getArr()[3].getTypePartition() == DOOR)
			{
				cout << "*";
			}
			else
			{
				cout << "^";
			}
		cout << "        ";
			if (getArr()[1].getTypePartition() == DOOR)
			{
				cout <<"         " << "*";
			}
			else
			{
				cout <<"         "<< "^";
			}
		cout << endl;
	}
	for (int i = 0; i < 10; i++)
	{
			if (getArr()[2].getTypePartition() == DOOR)
			{
				cout << "*"<<" ";
			}
			else
			{
				cout << "^"<<" ";
			}
	}
	cout << endl;
	/*
	for (int i = 0; i < 10; i++)
	{
		
		if (i % 2 == 1)
		{
			cout << "_";
		}
		else
		{
			if (getArr()[0].getTypePartition() == DOOR)
			{
				cout << " ";
			}
			else
			{
				cout << "_";
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 1)
		{
			cout << "|";
		}
		else
		{ 
			if (getArr()[3].getTypePartition() == DOOR)
			{
				cout << " ";
			}
			else
			{
				cout << "|";
			}
		}
		cout << "        ";
		if (i % 2 == 1)
		{
			cout << "|";
		}
		else
		{
			if (getArr()[1].getTypePartition() == DOOR)
			{
				cout << " ";
			}
			else
			{
				cout << "|";
			}
		}
		cout << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 1)
		{
			cout << "_";
		}
		else
		{
			if (getArr()[2].getTypePartition() == DOOR)
			{
				cout << " ";
			}
			else
			{
				cout << "_";
			}
		}
	}
	cout << endl;*/
};
Room::Room()
{
	Partition temp0 = Partition(DOOR, EXTERNAL);
	Partition temp1 = Partition(DOOR, EXTERNAL);
	Partition temp2 = Partition(DOOR, EXTERNAL);
	Partition temp3 = Partition(DOOR, EXTERNAL);
	Partition* temp = new Partition[4];
	setArr(temp);
}
Room::~Room()
{
	delete[] _arr;
};