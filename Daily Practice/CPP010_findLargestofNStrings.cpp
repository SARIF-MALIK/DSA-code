#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define for(l,r) for(int i = l; i < r; i++) 
typedef vector<int> vi;
typedef pair<int, int> pi;

/////////////////////////============= FUNCTIONS =================/////////////////////////////
	
string lexicoLargest(string str[]){
	int n = str->size(); 
	string largSoFar = str[0]; 
	for(0, n+1){ 
		cout << largSoFar << " " << str[i] << endl;
		if(largSoFar < str[i]) largSoFar = str[i]; 

	}

	return largSoFar; 
}

///////////////////////////////============  END ================//////////////////////
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--)
	{

//////////////////////////////////// write code ///////////////////////////////

	string str[] = {"abc", "ae", "xyz", "zz"}; 

	cout << lexicoLargest(str) << endl; 
	cout << (str[2] < str[3]); 
//////////////////////////////// end /////////////////////////////////////////////
	}
	return 0;
	
}

