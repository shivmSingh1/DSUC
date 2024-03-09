#include <stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE],rare=-1,front=0,n;

void insert(){
    if(rare==MAXSIZE-1){
       printf("queue is overflow");
    }else{
    printf("enter element\n");
    scanf("%d",&n);
    rare++;
    queue[rare]=n;
    }
}

void display(){
    if(front>rare){
        printf("queue is empty");
    }else{
     for(int i=front;i<=rare;i++){
        printf("%d ",queue[i]);
     }
    }
}

void delete(){
    if(front>rare){
       printf("queue is empty");
    }else{
    n=queue[front];
    front++;
    printf("poped element are %d\n",n);
    }
}
int main(){
    int choice;
    rare=-1;
    front=0;
    do{
    printf("1-insert\n");
    printf("2-display\n");
    printf("3-delete\n");
    printf("4-exit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: insert();break;
        case 2: display();break;
        case 3: delete();break;
    }
    }while(choice!=4);
    return 0;
}