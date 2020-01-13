#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main8()
{
    srand(time(0));
    int random,inum;
    random = rand()%21;
    printf("***************\nGuessing Game\n***************\nGuess Number Between 0-20");
    for(int i=5;i>0;i--)
        {
        printf("\nYou Have (%d tries left):  ",i);
        scanf("%d",&inum);
        if(inum>20){
            printf("\nInvalid Number\n");
            i+=1;
            continue;}
        else
            printf("%d",random);

        if(inum>random)
            printf("Sorry, %d is wrong. My Number is less than that\n",inum);
        else if(inum<random)
            printf("Sorry, %d is wrong. My Number is more than that\n",inum);
        else
            printf("Congrats you guessed it !\n");

        return 0;

        }


}
