#include <iostream>

using namespace std;

int numberOfDivisors(int x)
{
	int sum =0;
	int i;
	for(i = 1; i*i < x; i++)
	{
		if((x%i)==0)
		{
			sum++;
		}
	}	
	sum*=2;
	if((i*i) == x)
		sum++;
	return sum;
}

int main()
{
	int x = 1;
	int n = 2;
	while(numberOfDivisors(x) < 500)
	{	
		x+=n;
		n++;	
	}
	cout.precision(20);
	cout<<x<<endl;
	return 0;
}
