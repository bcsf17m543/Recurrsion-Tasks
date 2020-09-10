#include<iostream>
using namespace std;
void Populate(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
	arr[n - 1] = 1;
}
int Hadamard(int n)
{
	if (n > 1000000)
	{
		return 1;
	}
	int *arr = new int[n];
	Populate(arr, n);
	Hadamard(n*n);

}
int main()
{
	cout << Hadamard(6);
	
	return 0;
}