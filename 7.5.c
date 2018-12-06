#include<stdio.h>

int main(void)
{
    char c;
    int replace = 0;

    while(1)
    {
        scanf("%c", &c);
        switch(c)
        {
            case '#':
                goto end;
            case '.':
                replace++;
                printf("!");
                break;
            case '!':
                replace++;
                printf("!!");
                break;
            default:
                printf("%c", c);
        }

    }

end:
    printf("replace times: %d", replace);
    return 0;
}
