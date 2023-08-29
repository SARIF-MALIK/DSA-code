#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define for(l,r) for(int i = l; i < r; i++) 
typedef vector<int> vi;
typedef pair<int, int> pi;

/////////////////////////============= FUNCTIONS =================/////////////////////////////
bool lexComp(string a, string b){
	return a< b;  
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

    int n; 
    cin >> n; 
    string str[n]; 
    for(0,n){
        cin >> str[i];  
    }

    sort(str, str+n, lexComp); 

    for(0, n){
    	cout << str[i] << " "; 
    }
//////////////////////////////// end /////////////////////////////////////////////
	}
	return 0;
	
}

