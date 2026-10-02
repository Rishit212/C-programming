#include <stdio.h>
#include <string.h>
int main()
{
    char first[100], second[100], joined[200], copy[200];
    int result, length;
    printf("Enter the first string : ");
    scanf("%99s", first);
    printf("Enter the second string : ");
    scanf("%99s", second);

    result = strcmp(first, second);
    if(result == 0)
    {
        printf("The strings are equal\n");
    }
    else
    {
        printf("The strings are different\n");
    }

    strcpy(joined, first);
    strcat(joined, " ");
    strcat(joined, second);
    printf("Joined string : %s\n", joined);

    strcpy(copy, joined);
    printf("Copy of joined string : %s\n", copy);

    length = strlen(joined);
    printf("Length of joined string = %d\n", length);
    return 0;
}
