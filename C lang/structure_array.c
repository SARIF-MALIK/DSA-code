#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name [10];
};

int main (){
    
    struct employee e1,e2,e3;
    printf("Enter the code of employee e1: ");
    scanf("%d",&e1.code);    
    printf("Enter the salary of employee e1: ");
    scanf("%f",&e1.salary);
    printf("Enter the name of employee e1: ");
    scanf("%s",e1.name);
    printf("Enter the code of employee e2: ");
    scanf("%d",&e2.code);    
    printf("Enter the salary of employee e2: ");
    scanf("%f",&e2.salary);
    printf("Enter the name of employee e2: ");
    scanf("%s",e2.name);
    printf("Enter the code of employee e3: ");
    scanf("%d",&e3.code);    
    printf("Enter the salary of employee e3: ");
    scanf("%f",&e3.salary);
    printf("Enter the name of employee e3: ");
    scanf("%s",e3.name);

    // if need to add 100-200 employee details create array of structure

    struct employee facebook [100];
    facebook [0].code = 100;
    facebook [0].salary = 34.5;
   // facebook [0].name = darknode; wont work
    strcpy(facebook [0].name,"darknode");
    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    printf("%s\n",e1.name);

    return 0;
    
}