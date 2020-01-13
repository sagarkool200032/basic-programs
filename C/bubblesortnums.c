#include <stdio.h>
int bubblesort(int n, int num[n]);

int main999()
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int num[n];
    //add elements in array
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n\n");
    bubblesort(n,num);
    return 0;
}

int bubblesort(int n, int num[n])
{
    // bubble sort the elements
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int g = num[j];
                int l = num[j+1];
                num[j] = l;
                num[j+1] = g;
            }
        }
    }
    //display the elements
    for(int i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n\n");
    return 0;
}
