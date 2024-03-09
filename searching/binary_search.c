#include <stdio.h>
void binary_search(int arr[],int size){
  int low,mid,high,element,f=0;

  printf("enter the element you want to search\n");
  scanf("%d",&element);

  low=0;
  high=size-1;

  while (low<=high)
  {
    mid=(low+high)/2;
    if(element==arr[mid]){
        f=1;
        break;
  } else{
    if(element<mid){
    high=mid-1;
   
  }else{
     low=mid+1;
   }
  }
  }

  if(f==1){
  printf("searching success element found in array");
  }else{
    printf("searching not success element not found in array");
  }
}
int main(){
     
    int arr[500],size,temp;
    printf("enter the limit of elements\n");
    scanf("%d",&size);

    printf("enter the elements in array\n");
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    } 

    //for sorting the element in array
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    binary_search(arr,size);
    return 0;
}