#include <stdio.h>
#include <stdlib.h>

int main(){
    system("color 0d");
    for (int i = 0; i <= 10; i++)
    {
        printf("*");
        if (i == 10)
        {
            printf("\n");
            for (int j=0; j<=12; j++)
            {
                printf("*");
            }    
        }  
    }
    for (int i = 0; i < 5; i++)
    {
        printf("**\n");
    }
    for (int i = 0; i <= 10; i++)
    {
        printf("*");
        if (i == 10)
        {
            printf("\n");
            for (int j=0; j<=12; j++)
            {
                printf("*");
            }    
        }  
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n \t **");
    }
    printf("\n");
    for (int i = 0; i <= 10; i++)
    {
        printf("*");
        if (i == 10)
        {
            printf("\n");
            for (int j=0; j<=12; j++)
            {
                printf("*");
            }    
        }  
    }


    return 0;
}
