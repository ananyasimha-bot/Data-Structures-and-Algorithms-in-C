#include <stdio.h>
#define MAX 5
int stack[MAX], top=-1;
void push(int val){
    if(top==MAX-1)
        printf("Stack Overflow\n");
    else{
        top++;
        stack[top]=val;
    }
}
void pop(){
    if(top==-1)
        printf("Stack Underflow\n");
    else{
        printf("Deleted element: %d\n",stack[top]);
        top--;
    }
}
void display(){
    int i;
    for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}
