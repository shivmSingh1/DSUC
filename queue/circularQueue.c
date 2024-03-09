#include <stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE],rear=-1,front=-1,n;

void insert(){
    printf("enter an element\n");
    scanf("%d",&n);
    if((rear+1)%MAXSIZE==front){
        printf("queue is overflow\n");
    }else{
         if(rear==-1&&front==-1){
            rear=0;
            front=0;
         }else{
           rear= (rear+1)%MAXSIZE;
         }
         queue[rear]=n;
    }
}

void display(){
    if(rear==-1&&front==-1){
        printf("queue is empty\n");
    }else{
        for(int i=front;i!=rear;i=(i+1)%MAXSIZE){
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}

void delete(){
    if(rear==-1&&front==-1){
        printf("queue is empty\n");
    }else{
        n=queue[front];
        if(rear==front){
            rear=-1;
            front=-1;
        }else{
            front=(front+1)%MAXSIZE;
        }
        printf("deleted element are %d\n",n);
    }
}

int main(){
    int choice;
    do{
     printf("1-insert\t");
     printf("2-display\t");
     printf("3-delete\t");
     printf("4-exit\n");
     printf("enter your choice\n");
     scanf("%d",&choice);
     switch(choice){
        case 1:insert();break;
        case 2:display();break;
        case 3:delete();break;
     }
    }while(choice!=4);
    return 0;
}