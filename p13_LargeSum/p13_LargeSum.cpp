#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
void validateIntArray(int *array, int size)
{
	for(int i =0; i<size;i++)
	{
		while(array[i]>9)
		{
			array[i+1]++;
			array[i]-=10;
		}
	}
}
int main()
{
	char numbers[100][50];
	char c;
	int i = 0;
	int sum=0;
	int answer[55] = {0};
	ifstream file ("data.txt");
	if(file.is_open())
	{
		while(file.get(c))
		{
			if(c <= '9' && c>='0')
			{
				numbers[i/50][i%50] = c;
				i++;
			}
		}
		file.close();
	}
	for(int k = 49; k>=0; k--)
	{
		for(i = 0; i< 100; i++)
		{
			sum+=(numbers[i][k]-'0');	
		}
		int j = k;
		while(sum>0)
		{
			answer[49-j] += sum%10; 
			sum/=10;
			j--;
			validateIntArray(answer,55);
		}
	}
	for( i = 55; i>=0; i--)
	{
		cout<<answer[i];
	}
	cout<<endl;
	return 0;
}
