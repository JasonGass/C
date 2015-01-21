#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;
int main()
{
	int grid[20][20];
	int i = 0;
	double max =0;
	string line;
	ifstream file ("grid.txt");
	if (file.is_open())
	{
		while(file>>line)
		{
			grid[i/20][i%20] = atoi(line.c_str());
			i++;
		}
		file.close();
	}
	else cout<<"Unable to open file";

	//Search horizontally
	for(int j =0; j< 20; j++)
	{
		for(i=0; i < 17; i++)
		{
			double mult = grid[j][i]*grid[j][i+1]*grid[j][i+2]*grid[j][i+3];
			if (mult>max){max=mult;}
		}	
	}
	//Search Vertically
	for(int j =0; j< 20; j++)
	{
		for(i=0; i < 17; i++)
		{
			double mult = grid[i][j]*grid[i][j+1]*grid[i][j+2]*grid[i][j+3];
			if (mult>max){max=mult;}
		}	
	}

	//Search Diagonally	
	for(int j =0; j< 17; j++)
	{
		i=j;
		while((i+3)%20 != 0)
		{
			double mult = grid[i/20][i%20] *
					grid[(i+21)/20][(i+21)%20] *
					grid[(i+42)/20][(i+42)%20] *
					grid[(i+63)/20][(i+63)%20];
			if (mult>max){max=mult;}
			i+=21;
		}	
	}
	for(int j =20; j< 340; j=j+20)
	{
		i=j;
		while(((i+3)%20 != 0) && (i+60 < 400))
		{
			double mult = grid[i/20][i%20] *
					grid[(i+21)/20][(i+21)%20] *
					grid[(i+42)/20][(i+42)%20] *
					grid[(i+63)/20][(i+63)%20];
			if (mult>max){max=mult;}
			i+=21;
		}	
	}

	for(int j =3; j< 20; j++)
	{
		i=j;
		while((i+18)%20 != 0)
		{
			double mult = grid[i/20][i%20] *
				      grid[(i+19)/20][(i+19)%20] *
				      grid[(i+38)/20][(i+38)%20] *
				      grid[(i+57)/20][(i+57)%20];
			if (mult>max){max=mult;}
			i+=19;
		}	
	}
	for(int j =19; j< 339; j=j+20)
	{
		i=j;
		while((i+18)%20 != 0 && i+63<400)
		{
			double mult = grid[i/20][i%20] *
				      grid[(i+19)/20][(i+21)%20] *
				      grid[(i+38)/20][(i+42)%20] *
				      grid[(i+57)/20][(i+63)%20];
			if (mult>max){max=mult;}
			i+=19;
		}	
	}
	cout.precision(20);	
	cout<<max<<endl;
	return 0;
}
