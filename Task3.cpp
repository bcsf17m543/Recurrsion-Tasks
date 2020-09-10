#include<iostream>
using namespace std;
int GCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else if (a > b)
	{
		return GCD(b, a%b);
	}
	else if (b > a)
	{
		return GCD(a, a%b);
	}
}
int main()
{
	cout << GCD(5, 8) << endl;
	cout << GCD(11, 77) << endl;
	cout << GCD(109, 678) << endl;
	
	return 0;
}