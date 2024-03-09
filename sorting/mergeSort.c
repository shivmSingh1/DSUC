#include <stdio.h>
void merge(int A[],int low,int mid,int high);
void mergeSort(int A[],int low,int high);
int main(){
    int A[]={23,1,45,4,67};
    int size=5;
    mergeSort(A,0,5-1);

     for(int i=0;i<=size-1;i++){
        printf("%d ",A[i]);
    }
}
void merge(int A[],int low,int mid,int high){
     int i,j,k,B[100];
     i=low;
     j=mid+1;
     k=low;
     while (i<=mid&&j<=high)
     {
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;k++;
        }else{
            B[k]=A[j];
            j++;k++;
        }
     }
     while(i<=mid){
        B[k]=A[i];
        i++;k++;
     }
     while(j<=high){
        B[k]=A[j];
        j++;k++;
     }

     for(int i=low;i<=high;i++){
        A[i]=B[i];
     }
     
}

void mergeSort(int A[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        merge(A,low,mid,high);
    }

   
}