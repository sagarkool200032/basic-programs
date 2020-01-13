#include <stdio.h>
#include <string.h>
int main16()
{
    char A[100],B[100];
    printf("Enter 1st String : ");
    scanf("%s",A);
    printf("Enter 2nd String : ");
    scanf("%s",B);

    if(strcmp(A,B)==0)
        printf("String1: %s\nString2: %s\nEqual",A,B);
    else
        printf("String1: %s\nString2: %s\nNOT Equal",A,B);
}
