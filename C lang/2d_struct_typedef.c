#include<stdio.h>

typedef struct vector{
    int x;
    int y;

}bj;

bj sumvector(bj v1,bj v2){
    bj result;
    result.x = v1.x+v2.x;
    result.y = v1.y+v2.y;
    return result;
}

int main (){

    bj v1,v2,sum;

    v1.x= 5;
    v1.y = 6;
    printf("x dim is %d and y dim is %d\n",v1.x,v1.y);

    v2.x = 7;
    v2.y=19;
    printf("x2 dim is %d and y2 dim is %d\n",v2.x,v2.y);

    sum = sumvector (v1,v2);
    printf("x dim SUM is %d and y dim Sum is %d\n",sum.x,sum.y);

    return 0;
}