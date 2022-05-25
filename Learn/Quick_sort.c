#include <stdio.h>
#include <stdlib.h> 
int print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int split(int a[],int low,int high){
    int p,q,num,temp;
    p = low+1;
    q = high;
    num = a[low];
    while (q>=p)
    {       
        while(a[p]<num){
            p++;
        }
        while(a[q]>num){
            q--;
        }
        if (q>p){
            temp = a[p];
            a[p] = a[q];
            a[q] = temp;
        }  
    }
    temp = a[low];
    a[low] = a[q];
    a[q] = temp;
    return q;
    
}

void quicksort(int a[],int low,int high){
    int i;
    if(high>low){
        i = split(a,low,high);
        quicksort(a,low,i-1);
        quicksort(a,i+1,high);
    }
}

int main(){
    int size;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Element : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    quicksort(arr,0,size-1);
    print(arr,size);

    return 0;
}
