#include<iostream>
using namespace std;

void subsequence(string str, int idx, string op){
    if(idx == str.length()){
        cout<<op;
        return;
    }
    char ch = str[idx];
    subsequence(str, idx+1, op+ch);
    subsequence(str, idx+1, op);
}


int main(){
    string str = "abc";
    subsequence(str, 0, " ");
    return 0;
}