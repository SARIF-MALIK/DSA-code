#include<iostream>
using namespace std;

class Student
{
	public:
		int id;
		string name;
	void set()
	{
		
		cout<<"\n enter id , name :";
		cin>>id>>name;
	}
	void show()
	{
		cout<<"\n id : "<<id<<"\t name : "<<name;
	}
};

int main()
{
	Student zahid, prachi;
	zahid.set();
	prachi.set();
	zahid.show();
	prachi.show();
	
}
