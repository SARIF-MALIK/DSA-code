#include<iostream>
using namespace std;

class Bankdeposit{
    int principle;
    int years;
    float interestRate;
    float returnValue;

    public:
        Bankdeposit(){}
        Bankdeposit(int p,int y, float r);
        Bankdeposit(int p,int y, int r);

        

        void print();
};

Bankdeposit :: Bankdeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestRate = r;
    returnValue = principle;
    for(int i=0;i<y;i++)
    {
        returnValue = returnValue*(interestRate+1);
    }
}

Bankdeposit :: Bankdeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principle;
    for(int i=0;i<y;i++)
    {
        returnValue = returnValue*(1+interestRate);
    }
}

void Bankdeposit :: print(){
    cout<<endl<<"Priciple amt was "<<principle<<endl
    << ". Return value after "<<years
    << " year is "<<returnValue<<endl;
}

int main(){

    Bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = Bankdeposit(p,y,r); 
    bd1.print();
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>R;
    bd2 = Bankdeposit(p,y,R);
    bd2.print();


    
    return 0;
}