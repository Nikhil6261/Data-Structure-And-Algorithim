#include<stdio.h>
#define size 5

struct stack{
    int arr[size];
    int tos;
};

void push(struct stack*,int );
int pop(stack stack*);

int main(){
struct stack s1; 
push(&s1,10);

printf(pop(s1));
    
    return 0;
}
void push(struct stack *p,int ele ){
    if((*p)->tos==-1){
        p->arr[p->tos]=ele;
        printf("element added successfully");
        
    }
}
int pop(stack stack*);
