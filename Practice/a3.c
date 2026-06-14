#include<stdio.h>
#define SIZE 5
int queue[SIZE];

int front = -1;
int rear = -1;

void enqueue(int val){
    if(rear == SIZE - 1){
        printf("OVERFLOW");
    }

    else{
        if(front == -1) front = 0;
        rear++;
        queue[rear] = val;
        printf("%d is inserted\n",val);
    }
}

void dequeue(){
    if(front == -1 || front>rear){
        printf("Empty");
    }

    else{
        printf("%d is deleted\n",queue[front]);
        front++;
    }
}

void display(){
     if(front == -1 || front>rear){
        printf("Empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}


int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}