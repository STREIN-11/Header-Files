#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char arr[99], ar[99];
    printf("Enter : ");
    scanf("%s", arr);
    int n = strlen(arr);

    // for (int i = 0; i < n; i++)
    // {
    //     if (!isdigit(arr[i]))
    //     {
    //         printf("Found %d\n", i);
    //         for (int j = i; j < n; j++)
    //         {
    //             ar[j] = arr[j];
    //         }       
    //     }
    // }

    return 0;
}
