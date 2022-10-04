#include<stdio.h>
#include<math.h>
int main (){
   float r;
   float pi = 3.14;
   
   printf("Enter the radius of circle");
   scanf("%f",&r);

   printf("area of circle is %f", pi*pow(r,2));
    return 0;
}
