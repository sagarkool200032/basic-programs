#include <stdio.h>
int len(const char * lptr)
{
    const char * fptr = lptr;
    while(*lptr)
    {
        lptr++;
    }
    return lptr-fptr;
}
int main23()
{
    char str[]="Damon";
    printf("Length of String: %d\n",len(str));
    return 0;
}
