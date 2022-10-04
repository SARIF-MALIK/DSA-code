#include<iostream>
using namespace std;

class globalbank
{   
    int age;
    string name,bankname,branch;
    protected : 
        setdata(string a, int b, string c, string d){
            name = a;
            age = b;
            bankname = c;
            branch = d;
        }
        getdata(){ 
            cout<<name<<" "<<age<<" "<<bankname<<" "<<branch;
        }
    
};

class bank : public globalbank{
    public: 
        settdata(){
            string a, c, d;
            int b;
            cout<<"Enter the name, age, bankname & branch: ";
            cin>>a>>b>>c>>d;
            setdata(a,b,c,d);
        }
        display(){
            getdata();
        }

}; 

int main(){
    bank o1,o2;
    o1.settdata();
    o1.display();

    return 0;
}