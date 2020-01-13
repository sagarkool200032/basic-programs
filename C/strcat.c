#include <stdio.h>
#include <string.h>
int main15()
{
    const char s1[]="What is ",s2[]="Your Name";

    char result[100];

    int index=0,len1,len2,index1=0;

    len1=strlen(s1);
    len2=strlen(s2);

    printf("%d\n",len1);

    while(len1>=0)
    {
        result[index]=s1[index];
        index++;
        len1--;
    }
    printf("%s\n\n",result);

    while(len2>=0)
    {
        result[index-1]=s2[index1];
        index++;
        index1 ++;
        len2--;
    }
    printf("%s\n\n",result);
    return 0;
}
