#include<stdio.h>

int main(void)
{
    char c[1000];
    int i = 0;
    printf("Please enter some charactor(# to exit):");

    while (1)
    {
        scanf("%c", &c[i]);
        if (c[i] == '#')
        {
            break;
        }
        i++;
    }

    for (int j = 0; j < i; j++)
    {
        printf("%c:%d\t", c[j], c[j]);
        if (j % 8 == 7) 
        {
            printf("\n");
        }
    }

    return 0;
}
