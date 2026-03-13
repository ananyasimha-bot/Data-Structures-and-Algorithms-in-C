#include <stdio.h>
#define MAX 5
int queue[MAX], front=-1, rear=-1;
void enqueue(int val){
    if(rear==MAX-1)
        printf("Queue Overflow\n");
    else{
        if(front==-1) front=0;
        rear++;
        queue[rear]=val;
    }
}
void dequeue(){
    if(front==-1 || front>rear)
        printf("Queue Underflow\n");
    else{
        printf("Deleted element: %d\n",queue[front]);
        front++;
    }
}
void display(){
    int i;
    for(i=front;i<=rear;i++)
        printf("%d ",queue[i]);
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}
