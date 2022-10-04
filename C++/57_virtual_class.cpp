#include<iostream>
using namespace std;

                       //student
              //...........................
              //  Test             // Sports
                    //................
                         //Result             

class Student{
    protected:
        int roll_no;
    public:
        set_no(int a){
            roll_no = a;
        }
        void print_no(void){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout<< "Your result is here: "<<endl
                <<" Maths: "<<maths<<endl
                <<" Physics "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected: 
        float score; 
    public: 
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Sports score is "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_no();
            print_marks();
            print_score();

            cout<<"Your total score is : "<<total<<endl;
        }
};

int main(){
    
    Result sam;
    sam.set_no(11893);
    sam.set_marks(60,70);
    sam.set_score(9);
    sam.display();
    
    return 0;
}
