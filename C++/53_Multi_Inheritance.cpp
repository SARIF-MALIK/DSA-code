#include<iostream>
using namespace std;

class student{
    protected: 
        int roll_number;
    public:
        void set_roll_number(int r){
            roll_number = r;
        }
        void get_roll_nuber(void){
            cout<<"The roll no. is "<<roll_number<<endl;
        }
};

class Exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m1,float m2){
            maths = m1;
            physics = m2;
        }
        void get_marks(void){
            cout<< "The marks in maths are: "<<maths<<endl;
            cout<< "The marks in physics are: "<<physics<<endl;
        }
};

class Result : public Exam{
    float percentage;
    public: 
        void display(){
            get_roll_nuber();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<endl;

        }
};

int main(){

    Result sam;
    sam.set_roll_number(11893);
    sam.set_marks(82,78);
    sam.display();


    return 0;
}