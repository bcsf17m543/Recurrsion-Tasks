//#include<iostream>
//#include<cmath>
//using namespace std;
//class Matrix
//{
//private:
//	int Order;
//	
//	int *arr;
//public:
//	Matrix()
//	{
//		cout << "Entering Constructor\n";
//		Order = 0;
//		
//		arr = new int[Order*Order]; //order N
//		cout << "Exiting Constructor\n";
//	}
//	Matrix(int a)
//	{
//		
//	
//			cout << "Entering parametrized Constructor\n";
//			Order = a;
//
//			arr = new int[Order*Order]; //order N
//			cout << "Exiting parametrized Constructor\n";
//		
//	}
//	Matrix(Matrix &b)
//	{
//		
//		if (this != &b)
//		{
//			delete arr;
//		}
//		cout << "Entering copy Constructor\n";
//		Order = b.Order;
//	
//		arr = new int[Order*Order]; //order N
//		for (int i = 0; i < Order; i++)
//		{
//			this->arr[i] = b.arr[i];
//		}
//		cout << "Exiting copy Constructor\n";
//	}
//	int getOrder()
//	{
//		return Order;
//	}
//
//	void setOrder(int a)
//	{
//		Order = a;
//	}
//	Matrix& operator=(Matrix &b)
//	{
//		
//		if (this != &b)
//		{
//			delete arr;
//		}
//		cout << "Entering = operator\n";
//		Order = b.Order;
//
//		arr = new int[Order*Order]; //order N
//		for (int i = 0; i < Order*Order; i++)
//		{
//			this->arr[i] = b.arr[i];
//		}
//		cout << "Exiting = operator\n";
//		return *this;
//	}
//	void GetInput()
//	{
//		int a, b = 0;
//		cout << "Enter the order:";
//		cin >>a;
//		
//		this->Order = a;
//		for (int i = 0; i < Order*Order; i++)
//		{
//			cout << "Enter value:";
//			cin >> this->arr[i];
//		}
//	}
//	int find_i()
//	{
//		int it = 0;
//		for (int i = 0; i < Order; i++)
//		{
//			if (Order / i == 0)
//			{
//				it = i;
//			}
//		}
//		return it;
//	}
//	void ShowMat()
//	{
//		
//		for (int i = 0; i < Order*Order; i++)
//		{
//			cout << arr[i] << " ";
//			if ((i + 1) % Order == 0)
//			{
//				cout << endl;
//			}
//		}
//		
//		
//		
//	}
//	void Transpose()
//	{
//		int **arra;
//		*arra = new int[Order];
//		for (int i = 0; i < Order*Order; i++)
//		{
//			arra[i] = new int[Order];
//		}
//		for (int i = 0; i < Order*Order; i++)
//		{
//			cout << arr[i] << " ";
//			if ((i + 1) % Order == 0)
//			{
//				cout << endl;
//			}
//		}
//	}
//	~Matrix()
//	{
//		cout << "Entering Destructor\n";
//		delete this->arr;
//		cout << "Exiting Destructor\n";
//	}
//
//};
//int main()
//{
//		Matrix m(6);
//		Matrix k(9);
//		m = k;
//		m.GetInput();
//		m.ShowMat();
//
//	return 0;
//}