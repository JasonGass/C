#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int current = 2;
	int previous = 1;	
	while (current < 4000001)
	{
		sum+= current;
		sum-= (current*(current%2));
		int temp = current;
		current += previous;
		previous = temp;
	}
	cout<<sum;
	return 0;
}
