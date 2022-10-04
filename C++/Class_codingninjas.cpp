#include <iostream>
#include <cstring>
using namespace std;

class Student{
    public:
    int age;
    char *name;
    
        Student (int age, char*name){
            this->age = age;
            //this->name = name; // shallow copy
            this->name = new char[strlen(name)+1];  //deep copy
            strcpy(this->name, name);
        }
        
        Student(Student const & f1){
            age = f1.age;
            //name = f1.name;   // shallow copy by copy constructor
            
            this->name = new char[strlen(f1.name)+1];
            strcpy(name, f1.name);
        }
        
        void display (){
            cout<<age<<" "<<name<<endl;
        }
        
};


int main(){
    
    char name[] = "sarif";
    
    Student s1(13,name);
    s1.display();
    name[3] = 'e';
    Student s2(15,name);
    s2.display();
    
    Student s3(s2);
    s3.display();
    s2.name[3] = 'j';
    s3.display();
    s2.display();
}