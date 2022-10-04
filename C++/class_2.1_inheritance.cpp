#include<iostream>
using namespace std;

class A
{
	public:
		int a;
	void afun()
	{	
		a=20;
		cout<<"\n a  :"<<a;
	}

};
class B :public A 
{
	public:
		int b;
	void bfun()
	{
		b=30;
		cout<<"\n b : "<<b;
	}
	
};
class C : public A
{
	public:
		int c;
	void cfun()
	{
		c=90;
		cout<<"\n c : "<<c;
	}
	
};
class D : public B,public C
{
	public:
		int d;
	void afun()
	{
		B::afun();
	}
	void dfun()
	{
		d=130;
		cout<<"\n d : "<<d;
	}
	
};

int main()
{
	D ob;
	ob.afun();
	ob.bfun();
	ob.cfun();
	ob.dfun();
}
