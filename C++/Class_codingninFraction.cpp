#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    
    return gcd(b,a%b);
}

class Fraction {
    int numerator;
    int denominator;
    
    public:
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    
    void get() const{
        cout<<numerator<<"/"<<denominator<<endl;
    }
    
    // void add(Fraction const & f2){
    //     int d  = denominator*f2.denominator;
    //     int n = (d* numerator/denominator) + (d*f2.numerator/f2.denominator);
        
    //     int gcds = gcd(n,d);
        
    //     this->numerator = n/gcds;
    //     this->denominator = d/gcds;
    // }
    
    Fraction add(Fraction const &f2){
        int d  = denominator*f2.denominator;
        int n = (d* numerator/denominator) + (d*f2.numerator/f2.denominator);
        
        int gcds = gcd(n,d);
        Fraction newobj(n/gcds, d/gcds);
        
        return newobj;
        //this->numerator = n/gcds;
        //this->denominator = d/gcds;
    }
    
    Fraction operator+(Fraction const &f2) const{
        int d  = denominator*f2.denominator;
        int n = (d* numerator/denominator) + (d*f2.numerator/f2.denominator);
        
        int gcds = gcd(n,d);
        Fraction newobj(n/gcds, d/gcds);
        
        return newobj;
        //this->numerator = n/gcds;
        //this->denominator = d/gcds;
    }
    
    Fraction operator*(Fraction const &f2) const{
        int n = numerator*f2.numerator;
        int d = denominator*f2.denominator;
        int gcds = gcd(n, d);
        Fraction fnew(n/gcds, d/gcds);
        return fnew;
    }
    
    bool operator==(Fraction const &f2) const{
        if(numerator == f2.numerator && denominator == f2.denominator)
            return 1;
        else 
            return 0;
    }

    // void operator++(){
    //     numerator = numerator + denominator;
    //     int gcds = gcd(numerator, denominator);
    //     numerator /= gcds;
    //     denominator /= gcds;
    // }
    Fraction & operator++(){
        numerator = numerator + denominator;
        int gcds = gcd(numerator, denominator);
        numerator /= gcds;
        denominator /= gcds;

        return *this;
    }
};

int main(){
    Fraction s1(5, 4);
    Fraction s2(5,4);
    
    Fraction news = s1.add(s2);
    Fraction fnew = s1+s2;
    
    Fraction mnew = s1*s2;
    fnew.get();
    mnew.get();
    
    bool x = s1==s2;
    cout<<x<<endl;
    s1.get();
    ++s1; //preincrement;
    s1.get();

    Fraction s6 = ++s1;
    s6.get();

    Fraction s7 = ++(++s1);
    s1.get();
    s7.get();
}