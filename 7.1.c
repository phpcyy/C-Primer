#include<stdio.h>

int main(void)
{
    int space_num = 0, line_num = 0, other_num = 0;

    while(1) {
        char c;
        scanf("%c", &c);
        switch (c) 
        {
            case '#':
                goto end;
            case '\n':
                line_num++;
                break;
            case ' ':
                space_num++;
                break;
            default:
                other_num++;
        }
    }

end:
    printf("%d, %d, %d", space_num, line_num, other_num);
    return 0;
}
