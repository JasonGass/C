#include <iostream>
#include <fstream>

using namespace std;

struct node {
	int value;
	int shortestPath;
};

const int size = 100;

void readFromFile(node (&table)[size][size]){
	ifstream infile;
	infile.open("data.txt");
	for(int i = 0; i<size; i++)
	{
		for(int j = 0; j<=i; j++)
		{
			infile >> table[i][j].value;
		}
	}
}

void setPreviousPaths(node (&table)[size][size]){
	table[0][0].shortestPath = table[0][0].value;
	for (int i = 1; i<size; i++)
	{
		table[i][0].shortestPath = table[i-1][0].shortestPath+table[i][0].value;
		for(int j = 1; j<i; j++)
		{
			if(table[i-1][j].shortestPath > table[i-1][j-1].shortestPath)
			{
				table[i][j].shortestPath = table[i-1][j].shortestPath+table[i][j].value;
			}
			else
			{
				table[i][j].shortestPath = table[i-1][j-1].shortestPath+table[i][j].value;
			}
		}
		table[i][i].shortestPath = table[i-1][i-1].shortestPath+table[i][i].value;
	}
}

int maxPath(node (&table)[size][size]){
	int max = 0;
	for (int i = 0; i< size; i++)
	{
		if(table[size-1][i].shortestPath > max)
			max = table[size-1][i].shortestPath;
	}
	return max;
}

int main()
{
	node table[size][size];
	readFromFile(table);
	setPreviousPaths(table);
	int max = maxPath(table);
	cout<<max<<endl;
//  for(int i = 0; i<size; i++)
//	{
//		for(int j = 0; j<=i; j++)
//		{
//			cout<<table[i][j].shortestPath<<" ";
//		}
//		cout<<endl;
//	}
	return 0;
}
