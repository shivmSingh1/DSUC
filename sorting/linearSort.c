#include <stdio.h>
void display(int arr[], int size);
void sort(int arr[],int size);
int main(){

    int arr[500];
    int size;

    printf("enter the limt\n");
    scanf("%d",&size);
    printf("enter the elements you want to enter\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    // display(arr,size);
    sort(arr,size);

    return 0;
}

void display(int arr[], int size){

    printf("\nelements are: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void sort(int arr[], int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i; j<size; j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

      printf("\nelements are: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}