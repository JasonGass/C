#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(double num)
{
	for(double i = 2; i*i <= num; i++)
	{
		if (fmod(num,i)==0)
		{
		return false;
		}
	}		
	return true;
}

int main()
{
	double n= 600851475143;
	double largestPrimeFactor = 1;
	for (double i = 2; i*i <= n; i++)
	{
		if(fmod(n,i)==0 && isPrime(i))
		{
			largestPrimeFactor = i;
		}
	}	
	cout<<largestPrimeFactor;
	return 0;
}

