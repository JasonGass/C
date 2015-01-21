#include <iostream>

using namespace std;

const int size = 2000000;
int nextPossiblePrime(bool *b, int start)
{
	for(int i = start+1; i < size; i++)
	{
		if(b[i]==false)
			return i;	
	}
}

void markArray(bool *b, int p)
{
	int n = 2;
	while(n*p<size)
	{
		b[n*p] = true;
		n++;
	}
}

double addPrimes(bool *b)
{
	double sum = 0;
	for(int i = 2; i<size;i++)
	{
		if(b[i]==false)
			sum+= i;
	}	
	return sum;
}

int main()
{
	bool primes[size] = {false};
	int p = 2;
	while (p*p<size)
	{
		markArray(primes,p);
		p = nextPossiblePrime(primes, p);
	}
	cout.precision(20);
	cout<<addPrimes(primes)<<endl;	
	return 0;
}
