#include <stdio.h>
void linear_search(int arr[],int size){
   int flag=0,element;
   printf("enter the element you want to search in array\n");
   scanf("%d",&element);

   for(int i=0;i<size;i++){
    if(element==arr[i]){
        flag=1;
        printf("searching success element found");
    }
   }
   if(flag==0){
        printf("searching not success\n");
   }
}
int main(){
     
    int arr[500],size;
    printf("enter the limit of elements\n");
    scanf("%d",&size);

    printf("enter the elements in array\n");
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }

    linear_search(arr,size);
    return 0;
}