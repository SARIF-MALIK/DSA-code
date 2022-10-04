#include<stdio.h>

typedef struct complex{
    float real;
    int complex;
}comp;

void display(comp x){
    printf("The value of real part is %f\n",x.real);
    printf("The value of complex part is %d\n",x.complex);
}



int main (){
    comp cnum[5];

    for (int i=0;i<5;i++){
        printf("Enter the real values for %d num\n",i+1);
        scanf("%f",&cnum[i].real);

        printf("Enter the complex values for %d num\n",i+1);
        scanf("%d",&cnum[i].complex);


    }
    for (int i=0;i<5;i++){
        display (cnum[i]);
    }
    return 0; 
}