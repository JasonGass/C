#include <iostream>
#include <stack>

using namespace std;

int getReverse(int x)
{
	int reverse = 0;
	while(x>0)
	{
		reverse*=10;
		reverse+=(x%10);
		x/=10;
	}
	return reverse;
}

bool isDivisible(int lcm, int n)
{
   for(int i = n; i < 0; i--)
   {
	   if((lcm%i)== 0 && (lcm/i) < (n+1))
	   {
		   return true;
	   }
   }
   return false;
}
 

int main()
{
	int a = 97;
	for(int i = a; i > 0; i--)
	{
		int j = getReverse(i);
		int whole = i*100 + j;
		if (isDivisible(whole, 99))
		{
			cout<<whole<<endl;
			break;
		}
	}
	return 0;
}
