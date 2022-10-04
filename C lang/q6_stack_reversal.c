#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

struct Stack
{
    int top;
    unsigned capacity;
    char *array;
};

struct Stack *createStack(unsigned capacity)
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->capacity = capacity;
    s->top = -1;
    s->array = (char *)malloc(s->capacity * sizeof(char));
    return s;
}

int isFull(struct Stack *s)
{
    return s->top == s->capacity - 1;
}

int isEmpty(struct Stack *s)
{
    return s->top == -1;
}

void push(struct Stack *s, char item)
{
    if (isFull(s))
        return;
    s->array[++s->top] = item;
}

char pop(struct Stack *s)
{
    if (isEmpty(s))
        return -1;
    return s->array[s->top--];
}

void reverse(char str[])
{

    int n = strlen(str);
    struct Stack *s = createStack(n);

    int i;
    for (i = 0; i < n; i++)
        push(s, str[i]);

    for (i = 0; i < n; i++)
        str[i] = pop(s);
}

int main()
{
    int size;
    printf("Enter The Size of the Characters: ");
    scanf("%d", &size);

    char str[size];
    printf("Enter The Characters\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%s", &str[i]);
    }

    reverse(str);
    printf("Reverse string is %s", str);

    return 0;
}
