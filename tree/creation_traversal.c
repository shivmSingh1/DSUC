#include <stdio.h>
#include <stdlib.h>
struct node{
   struct node *ladd;
   int data;
   struct node *radd;
};struct node *root=NULL,*new1,*r,*p;

void create(struct node *r, struct node *new1);
void inorder(struct node *p);
void search(struct node *root,int element);

void main(){

    int choice,n,element;
    char ch;
    do{
    printf("---------Tree--------\n");
    printf("1-create\n");
    printf("2- inorder traversal\n");
    // printf("3-preorder traversal\n");
    // printf("4-postorder traversal\n");
    printf("3-search\n");
    printf("inter your choice\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("enter an element\n");
        scanf("%d",&n);
        new1= (struct node*)(malloc(sizeof(struct node)));
        new1->data=n;
        new1->ladd=NULL;
        new1->radd=NULL;
        if(root==NULL){
            root=new1;
           r=root;
        }else{
            create(root,new1);
        }
        break;

        case 2:
        p=root;
        inorder(root);
        break;

        case 3: 
         printf("enter element you want to search in BST\n");
         scanf("%d",&element);
        search(root,element);break;
    }
        printf("want to continue if yess press `Y`");
        scanf(" %c",&ch);

    }while(ch=='Y');

}

void create(struct node *r, struct node *new1){
    if(new1->data < r->data){
        if(r->ladd==NULL){
        r->ladd = new1;
        }else{
            create(r->ladd,new1);
        } 
    }
     if(new1->data > r->data){
        if(r->radd==NULL){
        r->radd = new1;
        }else{
            create(r->radd,new1);
        }
     }
     if(new1->data==r->data){
        printf("duplicate element not allowed\n ");
     }
}

void inorder(struct node *p){
    if(root==NULL){
        printf("list is empty");
    }else{
        if(p!=NULL){
            inorder(p->ladd);
            printf("%d ",p->data);
            inorder(p->radd);
        }
    }
        printf("\n");
}

void search(struct node *r,int element){
    
    if(r==NULL){
        printf("tree doesnt exit");
    }else if(r->data == element){
        printf("element %d found\n",root->data);
    }
     else if(element>r->data){
        search(r->radd,element);
        r=r->ladd;
    }else if(element<r->data){
        search(r->ladd,element);
    }
}
