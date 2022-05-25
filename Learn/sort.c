#include <stdio.h>
#include <stdlib.h>
// Bubble Sorting {
void sorting(int *arr, int size)
{
    int temp, sorted = 0;
    for (int i = 0; i < size - 1; i++)
    {
        // if(i==size-2){
        //     printf("Number of Time Take : %d\n",i+1);
        // }
        printf("Number of Time Take : %d\n", i + 1);
        sorted = 1;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sorted = 0;
            }
        }
        if (sorted)
        {
            return;
        }
    }
}

// Insertion Sort
void insersort(int *arr, int size)
{
    int j, temp;
    for (int i = 1; i <= size - 1; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// Selection Sortt
void selsort(int *A, int n){
    int indexOfMin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}
int print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Element : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    selsort(arr, size);
    print(arr, size);
    return 0;
}
