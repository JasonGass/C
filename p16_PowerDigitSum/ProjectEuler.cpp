#include <iostream>
#include "ProjectEuler.h"

using namespace std;


int test()
{
	return 5;
}
void validateBigNumber(int* number, int size)
{
	for(int i = size-1; i>0; i--)
	{
		while (*(number+i) > 9)
		{
			*(number+i)= *(number+i)-10;
			*(number+i-1)= *(number+i-1)+1;
		}
	}
}

void printArray(int* array, int size)
{
	for(int i = 0; i< size; i++)
	{
		cout<<*(array+i);
	}
	cout<<endl;
}

int sumArray(int* array, int size)
{
	int sum = 0;
	for(int i = 0; i< size; i++)
	{
		sum+=*(array+i);
	}
	return sum;
}
