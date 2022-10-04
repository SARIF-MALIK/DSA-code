#include <iostream>
using namespace std;

void sumOfTwoArrays(int arr1[], int arr2[], int n, int m, int op[]){
    
    
    // for(int i=max(n,m)-1; i>=0; i--){
        // if(i > n-1 )
        //     arr1[i] =0;
        // else if(i > m-1)  
        //     arr2[i] =0;
       for(int i=0;i<max(n,m);i++){   
           if(n-1-i == -1)
           arr1[n-1-i] = 0;
           else if(m-1-i == -1)
           arr2[m-1-i] =0;
        op [max(n,m)-i] += arr1[n-1-i] + arr2[m-1-i];
        if(op[max(n,m)-i] >9){
            int x = op[max(n,m)-i]/10;
            op[max(n,m)-i] = op[max(n,m)-i]%10;
            op[max(n,m)-i-1] +=x;
        }
    }
}

int main()
{   
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i =0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    
    int op[max(n,m)+1];
    for(int i=0;i<max(n,m)+1;i++)
        op[i] = 0;
        
    sumOfTwoArrays(arr1,arr2,n,m,op);
    for(int i=0;i<max(n,m)+1;i++)
        cout<<op[i]<<" ";
    return 0;
}