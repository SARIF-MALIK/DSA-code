#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fori(l,r) for(int i = l; i < r; i++) 
#define forj(l,r) for(int j = l; j < r; j++)
typedef vector<int> vi;
typedef pair<int, int> pi;
const int M = 4;

/////////////////////////============= FUNCTIONS =================/////////////////////////////
void spiralPrint(int arr[][M], int n, int m){
    int rowSt = 0, rowEnd = n-1, colSt = 0, colEnd = m-1;

    while(rowSt < rowEnd){
        // row 
        for(int j=rowSt; j<=colEnd; j++){
            cout << arr[rowSt][j] << " "; 
        }
        rowSt++; 
        for(int i=rowSt; i<=rowEnd; i++){
            cout << arr[i][colEnd] << " "; 
        }
        colEnd--; 
        for(int i=colEnd; i>=colSt; i--){
            cout << arr[rowEnd][i] << " "; 
        }
        rowEnd--; 
        for(int j=rowEnd; j>=rowSt; j--){
            cout << arr[j][colSt] << " "; 
        }
        colSt++; 
    }

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
    // M = 3 #define
    int n = 4; 
    int arr[n][M] = {{11, 12, 13,14}, {22,23,24,15}, {21,26,25,16}, {20,19,18,17}}; 
    
    spiralPrint(arr, n, M); 
    cout << "print" ;
//////////////////////////////// end /////////////////////////////////////////////
    }
    return 0;
    
}

