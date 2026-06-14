#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int val)
{

    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else{
    top++;
    stack[top] = val;
    printf("%d inserted\n", stack[top]);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("%d deleted\n", stack[top--]);
    }
}

void peep(int pos)
{
    int i = top - pos + 1;

    if (i < 0)
    {
        printf("Invalid Position\n");
    }
    else
    {
        printf("At pos %d is %d is present\n", pos, stack[top]);
    }
}

void change(int pos, int val)
{
    int i = top - pos + 1;

    if (i < 0)
    {
        printf("Invalid Position");
    }
    else
    {
        stack[top] = val;
        printf("Changed\n");
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int i = top; i >=0; i--)
        {
            printf("%d", stack[i]);
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    

    peep(2);

    change(2, 50);

    display();

    pop();

    display();
}