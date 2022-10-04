#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    char *arr;
    int size;
};

void push(struct stack *s, char data)
{
    if (s->top == s->size - 1)
    {
        printf("Stck overFlow\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}

void pop(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Stck UnderFlow\n");
    }
    else
    {

        char value = s->arr[s->top];
        s->top = s->top - 1;
        printf("%c ", value);
    }
}
int main()
{
    char a[40]= "EAS*Y*QUE***ST***IO*N***";
    
    int size = sizeof(a) / sizeof(char);
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = size;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    // Function to Calculate
    for (int i = 0; i < size; i++)
    {
        if (a[i] == '*')
        {
            pop(s);
        }
        else
        {
            push(s, a[i]);
        }
    }
}