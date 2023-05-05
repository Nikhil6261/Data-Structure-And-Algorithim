#include<stdio.h>
#define size 5

struct stack{
   int arr[size];
   int tos;
};

void push(struct stack* ,int );
int pop(struct stack* );

int main(){
struct stack s1;
 s1.tos=-1;

  push(&s1,10);
  push(&s1,20);
  push(&s1,30);
  push(&s1,40);
  push(&s1,50);

  int i;
for(i=1;i<6;i++){

     int x=pop(&s1);
    printf("pop element is %d \n",x);
}

return 0;
}

void push(struct stack *ps,int ele ){
    if(ps->tos == 5){
       printf("Stack overflow");
       return ;
 }
    ps->tos++;
    ps->arr[ps->tos]=ele;
    printf("element added successfully %d \n",ele);
}

int pop(struct stack *ps){
int x;

if(ps->tos == -1){
    printf("Stack underflow");
return -1;
}

x=ps->arr[ps->tos];
ps->tos--;
return x;
}
