#include <stdio.h>
#include <string.h>
int main17()
{
    char A[100],B[100];
    int index=0;
    printf("Enter 1st String : ");
    scanf("%s",A);
    printf("Enter 2nd String : ");
    scanf("%s",B);
    if(strlen(A)==strlen(B))
    {
        while(A[index]!='\0')
        {
            if(A[index]==B[index])
                index++;
            else
            {
                printf("Not Equal");
                return 0;
            }
        }
        printf("Equal");
        return 0;
    }
    else
    {
        printf("Not Equal");
                return 0;
    }

}
