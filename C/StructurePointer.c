#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct item
{
    char * itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item * i);
void printItem(struct item * i);

int main34()
{
    struct item * p1 ;
    struct item itm ;
    p1 = &itm ;
    p1->itemName = (char*)calloc(50,sizeof(char));
    if(p1 == NULL)
        exit(-1);

    readItem(p1);
    printItem(p1);

    free(p1->itemName);
    system("pause");
    return 0;
}

void readItem(struct item * i)
{

    printf("Enter Product Name: ");
    scanf(" ");
    gets(i->itemName);

    printf("Enter Price: ");
    scanf("%f",&i->price);

    printf("Enter Quantity: ");
    scanf("%d",&i->quantity);

    i->amount = (float)i->quantity * i->price;

}

void printItem(struct item * i)
{
    printf("\nProduct Name: %s\n",i->itemName);

    printf("\nPrice: %.2f\n",i->price);

    printf("\nEnter Quantity: %d\n",i->quantity);

    printf("\nEnter Amount: %.2f\n\n",i->amount);


}
