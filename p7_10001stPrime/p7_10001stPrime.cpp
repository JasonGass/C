#include <iostream>
#include <cmath>


using namespace std;

//DEFINE max 14;//nth*(log(nth)+log(log(nth)));
const int max = 115000;
void printArray(bool *array)
{
	for(int i = 0; i<115000;i++)
	{
		cout<<i<<": "<<array[i]<<endl;
	}
	
}

void markArray(bool *array, int p)
{
	int n = 2;
	while((n*p)<(115000))
	{
		array[n*p] = 1;	
		n++;
	}
}

int findNextPossiblePrime(bool *array, int p)
{
	for(int i = p+1; i<115000; i++)
	{
		if (array[i] == 0)
		{
			return i;
		}
	} 
}

int findNthPrime(bool *array, int n)
{
	int i = 1;
	int prime = 2;
	while(n>i)
	{
		prime = findNextPossiblePrime(array, prime);
		i++;
	}
	return prime;
}

int main()
{
	bool marks[115000] = {false};
	int p = 2;
	while(p*p < 115000)
	{
		markArray(marks,p);
		p = findNextPossiblePrime(marks,p);
	}
 	cout<<findNthPrime(marks, 10001);	
	return 0;
}
