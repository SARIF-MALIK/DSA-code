#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define for(l,r) for(int i = l; i < r; i++) 
typedef vector<int> vi;
typedef pair<int, int> pi;

/////////////////////////============= FUNCTIONS =================/////////////////////////////
bool lexComp(int a, int b){
	  stringstream ss; 
	  ss << a; 
	  string num1, num2; 
	  ss >> num1; 
	  num2 = to_string(b); 

	  int i=0, j=0; 
	  // cout << num1 << " " << num2<< endl; 
	  while(i<num1.size() && j<num2.size()){
	  	if(num1[i] < num2[j]) return false;
	  	if(num1[i] > num2[j]) return true;

	  	i++; 
	  	j++; 
	  }
	  
	  while(i<num1.size()){
	  	if(num1[i] > num2[0]) return true;
	  	i++; 
	  }
	  while(j<num2.size()){
	  	if(num2[j] > num1[0]) return true;
	  	j++; 
	  }
	  return false; 
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
    int arr[n]; 
    for(0,n){
        cin >> arr[i];  
    }

    sort(arr, arr+n, lexComp); 

    for(0, n){
    	cout << arr[i] << " "; 
    }
//////////////////////////////// end /////////////////////////////////////////////
	}
	return 0;
	
}

