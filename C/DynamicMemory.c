#include <stdio.h>
#include <stdlib.h>
int main25()
{
    char * str1 = NULL;
    int len;
    printf("Enter Limit of string: ");
    scanf("%d",&len);
    str1=(char*) calloc(len,sizeof(char));
    if(str1 != NULL)
    {
        printf("Enter string: ");
        scanf(" ");
        gets(str1);
        printf("%s\n",str1);
        free(str1);
        str1 = NULL;
    }
    return 0;
}
