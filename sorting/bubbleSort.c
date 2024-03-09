#include <stdio.h>

void bubble_sort(int arr[],int size);
int main(){

    int arr[500];
    int size;

    printf("enter the limt\n");
    scanf("%d",&size);
    printf("enter the elements you want to enter\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    bubble_sort(arr,size);

    return 0;
}


void bubble_sort(int arr[], int size){
    int temp=0;
    for(int i=0;i<size;i++){
        for(int j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

      printf("\nsorted elements are: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}