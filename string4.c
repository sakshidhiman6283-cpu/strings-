#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];

    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
    printf("Strings are Equal");
    else
    printf("Strings are Not Equal");

    return 0;
}