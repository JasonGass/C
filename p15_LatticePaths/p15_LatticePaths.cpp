#include <iostream>

using namespace std;

double factorial(int num)
{
	double result = num;
	while (num >1)
	{
		num--;
		result*=num;
	}
	return result;
}
int main()
{
	int n = 20;
	double result = factorial(2*n)/(factorial(n)*factorial(n));
	cout.precision(20);
	cout<<result<<endl;
		
	return 0;
}
