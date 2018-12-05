#include<stdio.h>
void ic();
void br();

int main(void)
{
    printf("Brazil, Russia, India, China\n");
    ic();
    br();
}

void ic(void)
{
    printf("India, China\n");
}

void br(void)
{
    printf("Brazil, Russia\n");
}
