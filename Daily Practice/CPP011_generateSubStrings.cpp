#include<bits/stdc++.h>
using namespace std;

#define ll long long
// #define for(l,r) for(int i = l; i < r; i++) 
typedef vector<int> vi;
typedef pair<int, int> pi;

/////////////////////////============= FUNCTIONS =================/////////////////////////////


///////////////////////////////============  END ================//////////////////////
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--)
	{

//////////////////////////////////// write code ///////////////////////////////

	string str = "abcde";

	for(int i=0; i<str.size(); i++){
		string newstr = ""; 
		for(int j=i; j<str.size(); j++){
			// for(int k=i; k<=j; k++){
			// 	cout << str[k] ; 
			// }
			newstr += str[j]; 
			cout << newstr; 
			cout << ",";
		}
		cout << endl; 
	}
	
//////////////////////////////// end /////////////////////////////////////////////
	}
	return 0;
	
}

