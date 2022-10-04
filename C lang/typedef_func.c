#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;

void show(emp emp1){
    printf("The employee code is %d\n",emp1.code);
    printf("The employee salary is %.2f\n",emp1.salary);
    printf("The employee name is %s\n",emp1.name);
}

int main (){

    emp e1;
    emp *ptr;

    ptr = &e1; //pointing to e1

    ptr->code = 11893;
    ptr->salary = 290000.45;
    strcpy(ptr->name,"SARIF");

    show(e1);

    return 0;
}