#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

void push(int val){

    if(top == SIZE-1){
        printf("Stack Overflow\n");
    }

    else{
        top++;
        stack[top] = val;
        printf("%d is Inserted\n",stack[top]);
    }
}

void pop(){
    if(top == -1){
        printf("Stack underflow");
    }
    else{
        printf("%d is deleted\n",stack[top--]);
    }
}

void peep(int pos){
    int i = top - pos + 1;

    if(i < 0){
        printf("Invalid Position\n");
    }
    else{
        printf("%d is at pos %d\n",stack[i],i);
    }
}

void change(int pos,int val){
    int i = top - pos + 1;

    if(i < 0){
        printf("Invalid Position\n");
    }
    else{
        stack[i] = val;
        printf("changed\n");
    }
}

void display(){
    if (top == -1){
        printf("Stack is Empty");
    }
    else{
        for(int i=top ; i>=0 ; i--){
            printf("%d \n",stack[i]);
        }
    }
}

void main(){
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();
    printf("peep");
    peep(2);

    display();
    push(30);

    display();

    change(3,60);

    display();
}