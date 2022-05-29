#include <stdio.h>
#include <stdlib.h>

void cal(int n)
{
    int i = n;
    int num =0;
        while (i!= 0)
        {
            num++;
            if (i % 2 == 0)
            {
                i = i / 2;
            }
            else
            {
                i = i - 1;
            }           
        }
    printf("%d",num);
}

int main()
{
    int n;
    // printf("Enter A Number : ");
    scanf("%d", &n);
    // i = n;s
    cal(n);
    return 0;
}
