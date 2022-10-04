//QUEUE using function call 
#include<stdio.h>
int queue[100],n,front=-1,rear= -1;
void enqueue(){
    int data;
    printf("enqueue:\n");
    if(rear >=n-1){
    printf("Overflow:\n");
    }
    else {
        if(front = -1){
            front =0;}
        rear++;
        printf("Enter the value to store: ");
        scanf("%d",&data);
        queue[rear] = data;
}
}

void dequeue(){
    printf("dequeue\n");
    if (front>rear || front ==-1){
        printf("Underflow");
    }
    else 
        printf("%d",queue[front]);
        front++;
}

void display(){
    printf("display\n");
    if(front==-1 || front>rear)
    {
        printf("Underflow");
    }
    else 
    for(int i=0;i<=rear;i++){
    printf("%d",queue[i]);
    }
}
int main (){

    printf("Enter the size of queue MAX(100): ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
    enqueue();
    }
    
    //dequeue();
    display();

return 0;
}   