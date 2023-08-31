#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fori(l,r) for(int i = l; i < r; i++) 
#define forj(l,r) for(int j = l; j < r; j++)
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

    int n, s, st = -1, end; 
    cin >> n; 
    cin >> s; 
    int arr[n]; 
    fori(0,n){
        cin >> arr[i];  
    }
    fori(0, n){
    	int sum = 0; 
    	forj(i, n){
    		sum+= arr[j]; 
    		if(sum == s){
    			if(st > i+1 || st == -1){			
    			st = i+1; 
    			end = j+1;  
    			}

    		}
    	}
    }

    cout << st << " " << end; 
//////////////////////////////// end /////////////////////////////////////////////
	}
	return 0;
	
}

