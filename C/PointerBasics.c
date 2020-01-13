#include <stdio.h>
#include <stdlib.h>
int main21()
{
    int num = 150;
    int * pnumber=NULL;

    pnumber=&num;

    printf("Value of pnumber: %p\nAddress of num: %p\nAddress of pnumber: %p\nValue of num: %d\n",pnumber,&num,&pnumber,*pnumber);

    return 0;
}
