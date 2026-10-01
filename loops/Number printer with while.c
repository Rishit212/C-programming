#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the Number : ");
    if(scanf("%d", &n) !=1 || 0>n)
    {
        printf("Invalid!\n");
        return 1;
    }
    printf("All the numbers from 0 to %d are : ", n);
    i=0;
    while(n>=i)
    {
        printf("%d ", i);
        i=i+1;
    }
    if(n%2 != 0)
    {
        printf("\nOdd numbers from 0 to %d are : ", n);
        i=1;
        while(n>=i)
        {
            printf("%d ", i);
            i=i+2;
        }
        printf("\nEven numbers from 0 to %d are : ", n);
        i=0;
        while(n>=i)
        {
            printf("%d ", i);
            i=i+2;
        }
    }
    else
    {
        printf("\nEven numbers from 0 to %d are : ", n);
        i=0;
        while(n>=i)
        {
            printf("%d ", i);
            i=i+2;
        }
        if(n>0)
        {
            printf("\nOdd numbers from 0 to %d are : ", n);
            i=1;
            while(n>=i)
            {
                printf("%d ", i);
                i=i+2;
            }
        }
    }
    return 0;
}