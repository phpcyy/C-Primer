#include<stdio.h>
#include<strings.h>

int main(void)
{
    char s[100];

    printf("Please enter a string: ");
    scanf("%s", s);

    for(int i = strlen(s) - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}
