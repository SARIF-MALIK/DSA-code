// STACK implementation
int stack[100],choice,n,top=-1;

#include<stdio.h>

void push(){
    printf("PUSH:\n");
    int data;
    if(top>=n-1){
        printf("overflow");
    }
    else {
    top++;
    printf("Enter the data to store: ");
    scanf("%d",&data);
    stack[top]=data;}
}

void pop(){
    printf("Pop:\n");
    if(top==-1){
        printf("Underflow");
    }
    else 
    {
    printf("%d",stack[top]);
    top--;}
}
void disp(){
    printf("display:\n");
    if(top==-1){
        printf("Stack is empty");
    }
    else 
    {
    for(int i = 0;i<=top;i++){
        printf("%d",stack[i]);
    }
    }
}
int main (){

    printf("Enter the size of STACK MAX(100): ");
    scanf("%d",&n);
    
    do{
        printf("\n\tx...........x.......x");
        printf("\n\t 1. PUSH");
        printf("\n\t 2. POP");
        printf("\n\t 3. DISPLAY");
        printf("\n\t 4. EXIT");
        printf("\n\tx...........x.......x");

    printf("\nEnter the choice: ");
    scanf("%d",&choice);

    switch(choice){

        case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        disp();
        break;

        case 4:
        break;

        default:
        printf("\n\tWrong choice hehe!");
        
        } 
    } while (choice!=4);
    return 0;
}

