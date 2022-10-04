#include<stdio.h>
int main (){
float p,r,t;

printf("Enter the principle amount\n");
scanf("%f",&p);
printf("Enter the rate of interest in percentage\n");
scanf("%f",&r);
printf("Enter the time period in years\n");
scanf("%f",&t);

printf("interest amount is %.2f\n",p*r*t/100);
printf("Total amount payable is %.2f after %.1f years\n",(p*r*t/100)+p, t);
return 0;
getch();   
}
