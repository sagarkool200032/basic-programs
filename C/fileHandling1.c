#include <stdio.h>
int main35()
{
    FILE * fp = NULL;
    char ch;
    int l=0;

    fp = fopen("test.txt","r+");

    if(fp==NULL)
    {
        printf("ERROR 404");
        return -1;
    }

    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
            l++;
    }
    printf("%d",++l);
    fclose(fp);
    fp = NULL;
    return 0;
}
