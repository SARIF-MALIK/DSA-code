#include <iostream>
using namespace std;

int gcd (int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

class Fraction {
    int numerator;
    int denominator;

    public:
        Fraction(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }

        void operator+(Fraction const & f2){
            int d = denominator*f2.denominator;
            int n = (numerator*d/denominator) + (f2.numerator*d/f2.denominator);
            int gcds = gcd(n, d);
            numerator = n/gcds;
            denominator = d/gcds;
        }

        Fraction &operator++(){               // pre increment 
            numerator += denominator;
            return *this;
        }

        Fraction  operator++(int){            // post increment
            Fraction fnew(numerator, denominator);
            numerator = numerator + denominator;
            int gcds = gcd(numerator, denominator);
            numerator /= gcds;
            denominator /= gcds;
            return fnew;
        }

        Fraction& operator+=(Fraction const &f2){
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;

            int num = x*numerator + (y*f2.numerator);
            numerator = num;
            denominator = lcm;
            int gcds = gcd(numerator, denominator);
            numerator/=gcds;
            denominator /= gcds;
            
            return *this;
        }

        void get() const{
            cout<<numerator<<"/"<<denominator<<endl;
        }
};

int main(){
    Fraction s1(5, 1);
    Fraction s2(2,1);
    /*
    s1.get();
    s2.get();
    s1+s2;
    s1.get();

    Fraction s4 = ++(++s1);
    s1.get();
    s4.get();

    Fraction s5 = s2++;
    s2.get();
    s5.get();

    */
    (s1 += s2)+=s2;
    s1.get();
}