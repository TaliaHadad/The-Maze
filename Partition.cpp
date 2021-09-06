#include "Partition.h"
Partition::Partition(int typePartition, int kindPartiton)
{
	setTypePartition(typePartition);
	setKindPartiton(kindPartiton);
}

Partition::Partition() {
	setTypePartition(WALL);
	setKindPartiton(INTERNAL);
}