#include<stdio.h>

struct vector{
    int x;
    int y;

}bj;

int main (){

    bj v1,v2;

    v1.x= 5;
    v1.y = 6;
    printf("x dim is %d and y dim is %d\n",v1.x,v1.y);

    v2.x = 7;
    v2.y=19;
    printf("x2 dim is %d and y2 dim is %d\n",v2.x,v2.y);

    return 0;
}