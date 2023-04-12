#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends

// Q You are given a string s. You need to reverse the string.


string reverseWord(string str){
    
  //## First Approach 
  
//   reverse(str.begin(), str.end());
    
    int st = 0, end = str.length()-1; 
    while(st < end){
        swap(str[st++], str[end--]); 
    }
  
  return str; 
}
