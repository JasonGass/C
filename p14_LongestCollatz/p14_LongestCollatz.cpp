#include <iostream>

using namespace std;

unsigned int recall[2000000] = {0};

unsigned int lengthOfCollatzChain(const int n)
{
	int num = n;
	unsigned int count = 1;	
	while(num!=1)
	{
		if(num < 1000000 && recall[num] != 0)
		{
			recall[n] = recall[num]+count-1;		
			return recall[num]+count - 1; 
		}
		count++;
		if(num%2==0)
			num/=2;
		else
			num=3*num+1;
	}
	recall[n] = count;
	
	return count;
}
int main()
{
	int number = 1000000;
	unsigned int max = 0;
	unsigned int x = 0;
	for(int i = 1; i < number; i++)
	{
		cout<<i<<endl;
		x = lengthOfCollatzChain(i);
		if (x>max){max=x;}
	}
	cout<<max<<endl;
	return 0;
}
