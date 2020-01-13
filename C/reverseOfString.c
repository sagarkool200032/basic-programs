#include <stdio.h>
#include <string.h>
int main18()
{
    char str[100],s2[100];
    int len,x,index=0;
    printf("Enter String: ");
    scanf("%s",str);
    len = strlen(str);
    x=len-1;
    while(x>=0)
    {
        printf("%c",str[x]);
        x--;
    }
    printf("\n\n");
    x=len-1;
    while(x>=0)
    {
        s2[x]=str[index];
        index++;
        x--;
    }
    s2[index]='\0';
    printf("\n\n%s",s2);
    return 0;
}
