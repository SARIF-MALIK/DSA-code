void matrixmultiply( int (*arrmat1)[mat1_col], int mat1_row, int mat1_col, int (*arrmat2)[mat2_col], int mat2_row, int mat2_col){
    if(mat1_col != mat2_row){
        cout<<"Cannot matrixmultiply mat1col != mat2row"<<endl;
        return;
    }
    
    // creating product matrix;
    product_mat[mat1_row][mat2_col] = {0};
    int sum = 0;
    for(int i=0;i<mat1_row;i++){
        for(int j=0;j<mat2_col;j++){
            for(int k=0;k<mat2_row;k++){
                sum = sum + arrmat1[i][k]*arrmat2[j][k]
                product_mat[i][j] = sum;
            }
            
        }
    }
    
    //printing 2d product_mat;
    for(int i=0;i<mat1_row;i++){
        for(int j=0;j<mat2_col;j++){
            cout<<product_mat[i][j]<<" ";
        }
        cout<<endl;
    }
}


#include <iostream>
using namespace std;

int main()
{
    int mat1_row = 3, mat1_col = 3, mat2_row = 3, mat2_col = 2;
    int arrmat1[mat1_row][mat1_col] = { 0, 5, 2, -1, 1, 0, 7, 4, 3};
    int arrmat2[mat2_row][mat2_col] = {1, 2, 0, 4, 3, 5};
    
    matrixmultiply(arrmat1, mat1_row, mat1_col, arrmat2, mat2_row, mat2_col);
    

    return 0;
}