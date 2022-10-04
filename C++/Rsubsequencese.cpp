#include <iostream>
#include <vector>
using namespace std;



void subsequence(vector<int> arr, int idx, vector <int> output){
    
    if(idx >= arr.size()){
        for(auto i : output)
            cout<<i<<" ";
        cout<<endl;
        return;
    }

    subsequence(arr, idx+1, output);
    output.push_back(arr[idx]);
    subsequence(arr, idx+1, output);
}

int main()
{
    vector <int> arr = {1, 2, 3};
    
    vector <int> v1(0);
	
    subsequence(arr, 0, v1);
	
	return 0;
}