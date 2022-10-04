
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

bool possible_r(int row, int sqsize){
        if(row >= sqsize)
            return false;
        return true;
}
bool possible_dg(int row, int col, int sqsize){
        if(row >= sqsize)
            return false;
        if(col >= sqsize)
            return false;
        return true;
}
bool possible_dn(int col, int sqsize){
        if(col>= sqsize)
            return false;
        return true;
}


int countminsum(int **arr, int sqsize, int row, int col, int sum){
    if(row>=sqsize || col>=sqsize)
        return INT_MAX;
        
    if(row == sqsize-1 && col == sqsize-1)
    {
        sum += arr[row][col];
        return sum;
    }
    
    int x = INT_MAX, y= INT_MAX, z = INT_MAX;
    
    if(possible_r(row, sqsize) ){
        x = countminsum(arr, sqsize, row, col+1, sum);
    }
    
    if(possible_dg(row, col, sqsize)){
        y = countminsum(arr, sqsize, row+1, col+1, sum);
    }
    
    if(possible_dn(col, sqsize)){
        z = countminsum(arr, sqsize, row+1, col, sum);
    }
    
    
    
    return arr[row][col]+min(x,min(y,z));
    
 
}



int main()
{
    int **arr = new int*[3];
    for(int i=0;i<3;i++){
        arr[i] = new int[3];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    

    int ans = countminsum(arr, 3, 0, 0, 0);
    cout<<ans;

    return 0;
}
