#include <iostream>
#include <vector>

using namespace std;

void solve(vector <int> v1, int idx){
    // base case
    if(idx >= v1.size()){
        cout<<endl;
        for(auto i : v1)
            cout<<i;
        return;
    }

    for(int j=idx; j<v1.size(); j++){
        swap(v1[idx], v1[j]);
        solve(v1,idx+1);
        
        //backtrack
        swap(v1[idx],v1[j]);
    }
}


void permutate(vector <int> v1){
    int idx = 0;
    solve(v1,idx);
    return;
}

int main(){

    vector <int> v1 = {1,2,3};
       permutate(v1);
    return 0;
}