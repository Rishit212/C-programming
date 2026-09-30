#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the Number : ");
    if(scanf("%d", &n) != 1 || 0>n)
    {
        printf("INVALID!\n");
        return 1;
    }
    printf("All the numbers from 0 to %d are : ", n);
    for(i=0; n>=i; i=i+1)
    {
        printf("%d ", i);
    }
    if(n%2 != 0)
    {
        printf("\nOdd numbers are : ");
        for(i=1; n>=i; i=i+2)
        {
            printf("%d ", i);
        }
        printf("\nEven numbers are : ");
        for(i=0; n>=i; i=i+2)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("\nEven numbers are : ");
        for(i=0; n>=i; i=i+2)
        {
            printf("%d ", i);
        }
        if(n>0)
        {
            printf("\nOdd numbers are : ");
            for(i=1; n>=i; i=i+2)
            {
                printf("%d ", i);
            }
        }
    }
    printf("\n");
    return 0;
}