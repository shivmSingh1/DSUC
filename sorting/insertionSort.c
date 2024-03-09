#include <stdio.h>

void insertion_sort(int arr[],int size);
int main(){

    int arr[500];
    int size;

    printf("enter the limt\n");
    scanf("%d",&size);
    printf("enter the elements you want to enter\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    insertion_sort(arr,size);

    return 0;
}


void insertion_sort(int arr[], int size){
    int temp,j;

    for(int k=1;k<size;k++){
       temp= arr[k];
       j=k-1;
       while(temp<arr[j]&&j>=0){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=temp;
    }

      printf("\nsorted elements are: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}