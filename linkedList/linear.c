#include <stdio.h>
#include <stdlib.h>
struct node{
   int data;
   struct node *add;
};struct node *start=NULL,*temp,*new1,*prev,*next;

void create(){
    int n;
    char ch;
    do{
    printf("enter element\n");
    scanf("%d",&n);
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=n;
    new1->add=NULL;
    

    if(start==NULL){
        start=new1;
        temp=start;
    }else{
        temp->add=new1;
        temp=temp->add;
    }
    printf("want to continue\n");
    scanf(" %c",&ch);
    }while(ch=='y');
}

void display(){
    if(start==NULL){
        printf("list not found");
    }else{
        temp=start;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->add;
        }
        printf("\n");
    }
}

void iFirst(){
    int n;
    if(start==NULL){
        printf("list not found");
    }else{
        temp=start;
        printf("enter an element");
        scanf("%d",&n);
        new1=(struct node*)malloc(sizeof(struct node));
        new1->data=n;
        new1->add=NULL;
        new1->add=temp;
        start=new1;
    }
}

void iMiddle(){
    int n,pos,i=1;
    if(start==NULL){
        printf("list not found\n");
    }else{
        printf("enter the position\n");
        scanf("%d",&pos);
        printf("enter the element\n");
        scanf("%d",&n);
         new1=(struct node*)malloc(sizeof(struct node));
        new1->data=n;
        new1->add=NULL;
        next=start;
        while(i<pos){
         prev=next;
         next=next->add;
         i++;
        }
        prev->add=new1;
        new1->add=next;
         }
}

void ilast(){
    int n;
    if(start==NULL){
        printf("list not found");
    }else{
         printf("enter the element\n");
        scanf("%d",&n);
         new1=(struct node*)malloc(sizeof(struct node));
        new1->data=n;
        new1->add=NULL;
        temp=start;
        while(temp->add!=NULL){
            temp=temp->add;
        }
        temp->add=new1;
    }
}

void dlast(){
    int n;
    if(start==NULL){
        printf("list is empty\n");
    }else{
        temp=start;
        while(temp->add!=NULL){
            prev=temp;
            temp=temp->add;
        }
        prev->add=NULL;
        n=temp->data;
        printf("deleted node is %d\n",n);
        free(temp);
    }
}

void dmiddle(){
    int n,pos,i=1;
    if(start==NULL){
        printf("list is empty\n");
    }else{
        printf("which node you want to delete\n");
        scanf("%d",&pos);
        next=start;
        while(i<pos){
        prev=next;
        next=next->add; 
        i++;
        }
        temp=next;
        next=next->add;
        prev->add=NULL;
        free(temp);
        prev->add=next;
    }
}

void dfirst(){
    if(start==NULL){
        printf("list is empty\n");
    }else{
        temp=start;
        start=start->add;
        free(temp);
    }
}

void main(){
int choice;
do{
printf("1-create\t");
printf("2-insert at first\t");
printf("3-insert at middle\t");
printf("4-insert at last\t");
printf("5-display\t");
printf("6-delete from last\t");
printf("7-delete from middle\t");
printf("8-delete from first\t");
printf("9-exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice){
    case 1:create();break;
    case 2:iFirst();break;
    case 3:iMiddle();break;
    case 4:ilast();break;
    case 5:display();break;
    case 6:dlast();break;
    case 7:dmiddle();break;
    case 8:dfirst();break;
}
}while(choice!=9);

}