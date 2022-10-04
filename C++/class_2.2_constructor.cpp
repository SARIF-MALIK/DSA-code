#include<iostream>
#include<conio.h>
using namespace std;

class Any
{
	public: 
		int x,y,z;
	Any()
	{
		cout<<"\n non parameterized constructor";		
	}	
	Any(int a)
	{
		x=a;
		cout<<"\n 1 para cons, x: "<<x;
	}
	Any(int a,int b)
	{
		x=a;y=b;
		cout<<"\n 2 para cons, x: "<<x<<"\t y: "<<y;
	}
	Any(int a,int b,int c)
	{
		x=a;y=b;z=c;
		cout<<"\n 3 para cons, x: "<<x<<"\t y: "<<y<<"\t z: "<<z;
	}
	~Any()
	{
		cout<<"\n object destroyed";
	}
};


int main()
{
	Any ob1(3,4),ob2(1,5,6),ob3(2,3),ob4(4,5,6);
	cout<<"\n enter any key to call destructor";
	getch();
	
}

