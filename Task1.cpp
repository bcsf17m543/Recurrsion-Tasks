#include<iostream>
#include"Stu.h"
using namespace std;
int main()
{
	LinkedList c;

	c.append(30);
	c.append(90);
	c.append(20);
	c.append(70);
	c.append(50);

	/*c.erase(20);*/

	c.Wrap_Print(); //reverse print
	c.Wrap_Del(4); //delete ith node
	cout << endl;
	c.Wrap_Print();
	c.Wrap_App(22);
	c.Wrap_App(20);
	c.Wrap_App(25); //append
	cout << endl;
	c.Wrap_Print();
	cout << endl;

	c.Wrap_Byval(50); //delete by value
	c.Wrap_Print();
	
	c.Wrap_App(6);
	c.Wrap_App(5);
	c.Wrap_App(4);
	c.Wrap_App(3);
	cout << endl;

	c.Wrap_Print();
	cout << "---\n";
	//c.Wrap_Alternate(); //alternate
	//cout << "---\n";
	//c.SplitAlternate(); //both alternate and split

	/*c.Wrap_DellAll();
	cout << "---\n";*/

	return 0;
}