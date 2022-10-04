/* Calculate the tax paid by employee to the government as per the slabs mentioned below:
Income tax               Tax
2.5L - 5.0L               5%
5.0L - 10.0L              20%
Above 10L                 30%

No tax below 2.5L*/

#include <stdio.h>
int main ()

{
float tax = 0, income;

printf("Enter your annual income\n");
scanf("%f",&income);

if (income >= 250000 && income <=500000)
{ tax = tax+0.05*(income-250000);}

if (income >= 500000 && income <= 1000000)
{ tax = tax + 0.20*(income-500000);}

if (income >= 1000000)
{tax = tax + 0.30*(income-1000000);}

printf(" your income tax payable is %f",tax);}