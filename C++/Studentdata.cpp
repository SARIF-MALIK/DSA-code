#include<iostream>
using namespace std;

class student {
    string name;
    int roll_no;
    int age;
    int total_marks;

    public:
        void inputdata () {
            cout<<"Enter the name of student : "<<endl;
            cin>>name;
            cout<<"Enter the roll number: "<<endl;
            cin>>roll_no;
            cout<<"Enter the age of student: "<<endl;
            cin>>age;
            cout<<"Enter the total marks out of 500: "<<endl;
            cin>>total_marks; 
        }

        void getdata() { 
            cout<<"Student name is "<<name<<endl;
            cout<<"Student age is "<<age<<endl;
            cout<<"Roll number is "<<roll_no<<endl;
            cout<<"Total marks obtained out of 500 : "<<total_marks<<endl;

        }
};



int main(){
    student n;
    n.inputdata();
    n.getdata();

    return 0;
}