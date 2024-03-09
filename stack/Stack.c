#include <stdio.h>
#define MAXSIZE 10
int stack[10],top=-1;

void push(){
        int n;
        if(top == MAXSIZE-1){
            printf("stack is overflow\n");

        }else {
             printf("Enter element ");
        scanf("%d",&n);
        top++; 
        stack[top]=n;
        
       }
    }
void display(){
    if(top == -1){
        printf("stack is empty\n");
    }else{
     for(int i=top; i>=0; i-- ){
         printf("%d \t",stack[i]);
     }
   
    }
}

void pop(){
    if(top == -1){
        printf("stack is empty");
    } else{
        int n;
        n=stack[top];
        top--;
        printf("poped element is %d\n",n);
    }
}
int main(){


   int choice; 

printf("------------STACK-----------\n");
printf("enter 1 for push\n");
printf("enter 2 for pop\n");
printf("enter 3 for display\n");
printf("enter 4 for exit\n");
printf("----------------------------\n");

do{
    
printf("\nenter your choice \t");
scanf("%d", &choice);

switch(choice){

    case 1: push(); break;
    case 2: pop(); break;
    case 3: display(); break;
    
    default: printf("you are exit");
}
} while(choice != 4);

return 0;
}