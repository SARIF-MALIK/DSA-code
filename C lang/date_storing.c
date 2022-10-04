#include<stdio.h>

typedef struct dat{
    int date;
    int month;
    int year;
}date;

void display(date c){
    printf("The date is %d/%d/%d\n",c.date,c.month,c.year);
}

int datecmp(date d1,date d2){
if(d1.year>d2.year){
    return 1;
}
if(d1.year<d2.year){
 return -1;
}

if(d1.month>d2.month){
return 1;
}
if(d1.month<d2.month){
return -1;
}
if(d1.date>d2.date){
return 1;
}
if(d1.date<d2.date){
return -1;
}
return 0;
}
int main (){
    date d1 = {2,11,22};
    date d2 = {2,12,22};

    display (d1);
    display (d2);
    
    int a = datecmp(d1,d2);
    printf("Date comparison fuction returns %d",a);

    
}