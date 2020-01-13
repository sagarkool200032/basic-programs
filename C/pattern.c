#include <stdio.h>
#include <conio.h>
int main20()
{

    //1
    for(int i=1;i<11;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("@");
        }


        printf("\n");
    }
    printf("\n\n");

    //2
    for(int i=11;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    //3
    int java=1;
    for(int i=10;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");

        }
        for(int j=1;j<=java;j++)
        {
           printf("*");
        }
        java++;
        printf("\n");
    }
    printf("\n\n");

    //4
    int java1=1;
    for(int i=10;i>=1;i--)
    {

        for(int j=1;j<=java1-1;j++)
        {
           printf(" ");
        }
        java1++;

        for(int j=1;j<=i;j++)
        {
            printf("*");

        }

        printf("\n");


    }
    printf("\n\n\n\n\n");

    //5
    int java6=1;
    for(int i=21;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");

        }
        for(int j=1;j<=java6;j++)
        {
           printf("$$");
        }
        java6++;
        printf("\n");
    }

    int java10=1;
    for(int i=21;i>=1;i--)
    {
        for(int j=1;j<=java10-1;j++)
        {
           printf(" ");
        }
        java10++;

        for(int j=1;j<=i;j++)
        {
            printf("$$");

        }
        printf("\n");
    }

    return 0;

}
