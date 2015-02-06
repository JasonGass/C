#include <iostream>
#include "ProjectEuler.h"

using namespace std;
int main()
{
	int largenumber[320] = {0};
	largenumber[319] = 2;
	validateBigNumber(largenumber, 320);
	for(int i =1; i<1000;i++)
	{
		for(int j = 0; j<320; j++)
		{
			largenumber[j] = largenumber[j]*2;
		}
		validateBigNumber(largenumber, 320);
	}
	printArray(largenumber,320);
	cout<<sumArray(largenumber, 320);
	return 0;
}
