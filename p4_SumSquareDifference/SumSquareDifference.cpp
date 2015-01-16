#include <iostream>

using namespace std;

int main()
{
	int sumOfSquares = 0;
	int sumSquared = 0;
	for(int i = 0; i<=100; i++)
	{
		sumOfSquares+= i*i;
		sumSquared+= i;
	}
	sumSquared *= sumSquared;
	cout<<(sumSquared - sumOfSquares);
	cout<<"\n";
	return 0;
}
