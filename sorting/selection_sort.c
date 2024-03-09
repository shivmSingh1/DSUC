#include <stdio.h>
void selection_sort(int arr[], int size);
int main()
{
    int arr[500];
    int size;

    printf("enter the limit of array\n");
    scanf("%d", &size);
    printf("enter the element of an array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr,size);

    return 0;
}
void selection_sort(int arr[], int size)
{

    int min, pos, temp;

    for (int j = 0; j < size; j++)
    {
        min = arr[j];
        pos = j;
        for (int i=j+1; i < size; i++)
        {
            if (arr[i]<min)
            {
                min = arr[i];
                pos = i;
            }
        }

        if (j != pos)
        {
            temp = arr[pos];
            arr[pos] = arr[j];
            arr[j] = temp;
        }
    }

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
