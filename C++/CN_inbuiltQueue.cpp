#include<iostream>
using namespace std;

#include <queue>
//#include <stack>
int main(){
    //stack <int> test;
    queue <int> s1;
    s1.push (9);
    cout<<s1.front()<<endl;
    s1.pop();
    //cout<<s1.front()<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.empty()<<endl;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    while(!s1.empty()){
        cout<<s1.front()<<" ";
        s1.pop();
    }
    return 0;
}