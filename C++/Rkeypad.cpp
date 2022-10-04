#include<iostream>
using namespace std;


void solve(string digit, string output, int idx, string mapping []){
    //base case
    if(idx >= digit.length()){
        cout<<output<<" ";
        return;
    }

    string value = mapping[digit[idx]-'0'];

    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digit,output,idx+1,mapping);
        output.pop_back();
    }
}

void keypad(string digit){
    if(digit.empty())
        return;

    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int idx = 0;
    string output;
    solve(digit, output, idx, mapping);
    return;
}

int main(){
    
    string digit;
    cin>>digit;

    keypad(digit);


    return 0;
}