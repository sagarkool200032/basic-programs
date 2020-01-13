#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main4()
{
  char *ptr = NULL;
  int words;
  printf("Total Words in your name: ");
  scanf("%d",&words);
  char str[words][30];
  int c=0,ct=-1;
  printf("Enter Full Name:");
  for(int i=0;i<words;i++)
  {
    scanf("%s",str[i]);
    c++;
  }
  for(int i=0;i<c;i++)
  {
    if(i==(c-1))
    {
        ct++;
        break;
    }
    ptr = str[i];
    printf("%c.",*ptr);
    ptr = NULL;
    ct++;
  }
    int l=strlen(str[ct]);
    ptr=str[ct];
    for(int i=0;i<l;i++)
    {
        printf("%c",*ptr);
        ptr++;
    }
  return 0;
}
