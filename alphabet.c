#include <stdio.h>
int main()
{
    char b;
    printf("Enter a character: ");
    scanf("%c",&c);

    if( (b>='a' && b<='z') || (b>='A' && b<='Z'))
        printf("%n is an alphabet.",b);
    else
        printf("%b is not an alphabet.",b);

    return 0;
}
