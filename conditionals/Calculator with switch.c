#include <stdio.h>
int main()
{
    float a, b, result;
    char choice;
    printf("Enter the first number : ");
    if(scanf("%f", &a) != 1)
    {
        printf("INVALID INPUT!\n");
        return 1;
    }
    printf("Enter the second number : ");
    if(scanf("%f", &b) != 1)
    {
        printf("INVALID INPUT!\n");
        return 1; 
    }
    printf("Choose your operation \n + for addition \n - for subtraction \n * for multiplication \n / for division \n Enter your operation : ");
    scanf(" %c", &choice);
    switch(choice)
    {
        case '+':
            result=a+b;
            printf("The sum of %.2f and %.2f = %.2f\n", a, b, result);
            break;
        case '-':
            result=a-b;
            printf("The difference of %.2f and %.2f = %.2f\n", a, b, result);
            break;
        case '*':
            result=a*b;
            printf("The product of %.2f and %.2f = %.2f\n", a, b, result);
            break;
        case '/':
            if(b==0)
            {
                printf("INVALID division with 0 is not possible\n");
            }
            else
            {
                result=a/b;
                printf("The division of %.2f and %.2f = %.2f", a, b, result);
            }
            break;
        default:
            printf("INVALID INPUT\n");
    }
    return 0;
}
