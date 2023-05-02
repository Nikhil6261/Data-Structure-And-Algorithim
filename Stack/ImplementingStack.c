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
s1.tos=-1;

push(&s1,10);

printf(pop(s1));
    
    return 0;
}
void push(struct stack *ps,int ele ){
    if((*ps)->tos==-1){
       printf("Stack underflow");
       return 0;
    }

    ps->tos++;    
    ps->arr[ps->tos]=ele;
    printf("element added successfully %d",ele);

}

int pop(stack stack *ps){
int x;

if((ps)->tos == define) printf("Stack overflow");

x=ps->arr[p->tos];
ps->tos--;
return x;
}
