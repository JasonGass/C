#include <iostream>
#include <cmath>
using namespace std;

bool isDivisible(double lcm, int n)
{
	for(int i = n; i >0; i--)
	{
		if(fmod(lcm,i)!= 0)
		{
			return false;
		}
	}
	return true; 
}

int main()
{
	int n = 20;
	double LCM = 1;
	for(int i = 1; i<=n; i++)
	{
		LCM*=i;
	}

	for(int i = n; i>1; i--)
	{	
		while(isDivisible(LCM,n))
		{
			LCM/=i;	
		}
		LCM*=i;
	}
	cout.precision(15);
	cout<< LCM <<endl;
	return 0;
}
