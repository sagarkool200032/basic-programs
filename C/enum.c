#include <stdio.h>
#include <stdlib.h>

int main4()
{
    enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
    enum Company C1,C2,C3;

    C2=GOOGLE;
    C3=EBAY;
    C1=XEROX;

    printf("%d\n%d\n%d\n",C1,C2,C3);
    return 0;
}
