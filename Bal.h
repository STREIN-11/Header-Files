#include<stdio.h>

//Prototype
void inf_bal()
{
    while(1){
    printf("bal");
    }
}
///For Adddd
void cal(int a,int b){
    int sum=0;
    sum = a+b;
    printf("Result is : %d",sum);
}

//For Subtract
void cal(int a,int b){
    int sum=0;
    sum = a-b;
    printf("Result is : %d",sum);
}


//Prototype
void bal_er_love();
//Declaration
void bal_er_love()
{
    for(int i=1;i<=14;i++)        // for I
    {
        for(int j=1;j<=10;j++)
            printf(" ");
        if(i<4||i>11)
        {
            for(int j=1;j<=20;j++)
                printf("I");
            printf("\n");
        }
        else
        {
            for(int j=1;j<=7;j++)
                printf(" ");
            for(int j=1;j<=5;j++)
                printf("I");
            printf("\n");
        }
    }
    printf("\n\n");        //for gapping
    for(int i=1;i<=3;i++)    //for love
    {
        for(int j=1;j<=4*(3-i);j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
            printf("BAL ");
        for(int j=1;j<=(24-8*i);j++)
            printf(" ");
        for(int j=1;j<=2*i-1;j++)
            printf("BAL ");
        printf("\n");
    }
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=2*(i-1);j++)
            printf(" ");
        for(int j=1;j<=(11-i);j++)
            printf("BAL ");
        printf("\n");
    }
    printf("\n\n");
    for(int i=1;i<14;i++)     // for U
    {
        for(int j=1;j<=8;j++)
            printf(" ");
        if(i<=8)
        {
            for(int j=1;j<=5;j++)
                printf("U");
            for(int j=1;j<=14;j++)
                printf(" ");
            for(int j=1;j<=5;j++)
                printf("U");
            printf("\n");
        }
        else if(i>8 && i<12)
        {
            for(int j=1;j<=(i-8);j++)
                printf(" ");
            for(int j=1;j<=5;j++)
                printf("U");
            for(int j=1;j<=(30-2*i);j++)
                printf(" ");
            for(int j=1;j<=5;j++)
                printf("U");
            printf("\n");
        }
        else
        {
            for(int j=1;j<=(i-8);j++)
                printf(" ");
            for(int j=1;j<=(40-2*i);j++)
                printf("U");
            printf("\n");
        }
        
    }

}
