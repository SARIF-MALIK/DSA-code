//STACK using fucntion call
#include<stdio.h>
int stack[100],n,data,i,top=-1;

void push(){
    printf("PUSH:\n");
    if(top>=n-1){
        printf("Overflow");
    }
    else {
        top++;
        printf("Enter the value to store: ");
        scanf("%d",&data);
        stack[top]=data;
    }

}

void pop(){
    printf("POP:\n");
    if(top==-1){
        printf("Underflow");
    }
    else {
        printf("%d\n",stack[top]);
        top--;
    }
}

void disp(){
    printf("display:\n");
    if(top==-1){
        printf("stack is empty");
    }
    for(i=0;i<=top;i++){
        printf("%d\n",stack[i]);
    }
}


int main(){

printf("Enter the size of stack: ");
scanf("%d",&n);

for(i=0;i<n;i++){
push();
}
pop();
disp();
}