#include <stdio.h>
int main5()
{
    int x;
    printf("Enter Minutes: ");
    scanf("%d",&x);

    float ymins = x/525600.0;
    float rmins = (float)(x%525600);
    float dmins = rmins/1440.0;

    printf(" (Approximately) years: %.2f\ndays: %.2f",ymins,dmins);
    return 0;
}
