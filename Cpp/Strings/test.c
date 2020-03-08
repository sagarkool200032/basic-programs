
#include <stdio.h>
int main()
{
    char name[20],age[3];
    printf("Enter Your Name: ");
    // scanf(" ");
    fgets(name,20,stdin);

    printf("Enter Your Age: ");
    // scanf(" ");
    fgets(age,3,stdin);

    printf("%s ",name);
    printf("%s ",age);
    return 0;
}