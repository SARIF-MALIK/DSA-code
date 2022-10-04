#include<iostream>
using namespace std;

template <typename T>

class Pair{
    T x;
    T y;

    public:
        void set(T x){
            this->x = x;

        }

        T get(){
            return x;
        }
        void set (T x, T y){
            this->x = x;
            this->y = y;
        }
};

int main(){
    Pair <int> obj;
    Pair <double> obj2;
    Pair <char> obj3;
    obj3.set('a','b');
    cout<<obj3.get()<<endl;
    obj.set(4,6);
    cout<<obj.get();
    return 0;
}