#include<stdio.h>

int main(void)
{
    char c, a;

    printf("Please enter a upper charactor:");
    scanf("%c", &c);

    for (int i = 0; i <= c - 'A'; i++)
    {
        char a = 'A';
        printf("%*s", c - 'A' - i, "");

        for(int j = 0; j < i; j++, a++)
        {
            printf("%c", a);
        }

        printf("%c", a);

        for(int k = 0; k < i; k++)
        {
            printf("%c", --a);
        }

        printf("\n");
    }
}
