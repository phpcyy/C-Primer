#include<stdio.h>

int main(void)
{
    char c;
    int replace = 0;

    while(1)
    {
        scanf("%c", &c);
        if (c == '#')
        {
            break;
        }

        if (c == '.')
        {
            replace++;
            printf("!");
        }
        else if (c == '!')
        {
            replace++;
            printf("!!");
        }
        else
        {
            printf("%c", c);
        }
    }

    printf("replace times: %d", replace);

    return 0;
}
