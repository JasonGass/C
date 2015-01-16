#include <iostream>
#include <stack>

using namespace std;

bool isPalindrome(int x)
{
	stack<int> st;
	int tempX=x;
	while(tempX > 0)
	{
		st.push(tempX%10);
		tempX/=10;
	}
	while(!st.empty())
	{
		tempX*=10;
		tempX+=st.top();
		st.pop();
	}
	return (tempX==X);
}
int main()
{
	int a = 999;
	int b = 999;
	isPalindrome(1234);
	return 0;
}
