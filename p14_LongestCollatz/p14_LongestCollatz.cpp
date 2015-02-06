#include <iostream>

using namespace std;

unsigned int recall[1000000] = {0};

unsigned int lengthOfCollatzChain(const int n)
{
	unsigned int y = n;
	unsigned int count = 1;	
	while(y!=1)
	{
		if (y<100001)
		{
			if(recall[y] != 0)
			{
				recall[n] = recall[y]+count-1;		
				return recall[n];
			}
		}
		count++;
		if(y%2==0)
			y/=2;
		else
			y=3*y+1;
	}
	recall[n] = count;
	
	return count;
}
int main()
{
	int number = 1000000;
	unsigned int max = 0;
	int iMax = 1;
	unsigned int x = 0;
	for(int i = 1; i < number; i++)
	{
		x = lengthOfCollatzChain(i);
		if (x>max){iMax=i; max=x;}
	}
	cout<<iMax<<endl;
	return 0;
}
