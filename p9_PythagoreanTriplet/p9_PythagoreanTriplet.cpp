#include <iostream>

using namespace std;
int main()
{
	int a,b,c;
	for(c = 500; c > 334;c--)
	{
		for(b=c-1; b>c/2; b--)
		{
			a=1000-b-c;
			if(a*a+b*b==c*c)
			{
				cout<<a*b*c<<endl;
			}
		}
	}
	return 0;
}
