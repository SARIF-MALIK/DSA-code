#include<iostream>
using namespace std;

class matrix {
    public:
        int mat[10][10];
        int row;
        int col;
    matrix(): row(0), col(0){

    }

    void read(int r, int c) {
        row = r;
        col = c;
        
        cout<<"enter elements";
        for(int i=0;i<this->row;i++){
            for(int j=0; j<this->col;j++){
                cout<<" at index ["<<i<<"]"<<"["<<j<<"]"<<" :";
                cin>>this->mat[i][j];
            }
        }
    }

    void multiply(matrix const &obj, matrix const &obj2) {
        if(obj.col != obj2.row){
            cout<<"cannot multiply";
            return;
        }

        for(int i=0;i<obj.row;i++) {

            for(int j=0;j<obj2.col;j++) {
                mat[i][j] = 0;
                for(int k = 0; k<obj2.row; k++){
                    mat[i][j] += (obj.mat[i][k]*obj2.mat[k][j]);
                }
            }
        }
        row = obj.row;
        col = obj2.col;
 
    }

    void print() {
        cout<<endl<<"Matrix : "<<endl;

        for(int i=0;i<row;i++){
            for(int j=0; j<col; j++){
                cout<<"\t"<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};


int main(){
    matrix obj, m3;
    obj.read(2,2);
    matrix obj2;
    obj2.read(2,2);
    
    m3.multiply(obj,obj2);
    m3.print(); 
    return 0;
}