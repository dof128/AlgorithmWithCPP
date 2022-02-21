#include "bitvector.h"

using namespace DataStructure;

void Bitvector::Bitvector()
{
	mArray = 0;
	mSize = 0;
	Resize(size);
}

void Bitvector::~Bitvector()
{
	if (mArray != 0)
		delete[] mArray;

	mArray = 0;
}

void Bitvector::Resize(int size)
{
	unsigned long* newVector = 0;
	const int typeSize = sizeof(unsigned long);
	int vectorSize = size % typeSize == 0 ? size / typeSize : size / typeSize + 1;

	newVector = new unsigned long[vectorSize];
	if (newVector == 0)
		return;

	int min = vectorSize < mSize ? vectorSize : mSize;
	for (int i = 0; i < min; ++i)
		newVector[i] = mArray[i];

	mSize = size;
	if (mArray != 0)
		delete[] mArray;

	mArray = newVector;
}