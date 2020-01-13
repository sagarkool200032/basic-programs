#include <stdio.h>
int main7()
{
    float bpay,tax=0,newpay;
    int hours;

    printf("No. Of hours worked in a week: ");
    scanf("%d",&hours);

    if(hours<=40)
        bpay=(hours*12.0);
    else
        bpay=(40*12)+((hours-40)*18);

        newpay=bpay;

    if(bpay>=300){
        tax=(300*15)/100;
        newpay=newpay-300;

        if((newpay)<=150 || newpay>=150){
                if(newpay>=150)
                    tax+=(150*20)/100;
                else
                    tax+=(newpay*20)/100;
            newpay=newpay-150;}

            if((newpay)>0){
                tax+=((newpay)*25)/100;}
    }
    printf("gross pay: %.2f \ntaxes: %.2f \nnet pay: %.2f\n",bpay,tax,bpay-tax);
    return 0;
}
