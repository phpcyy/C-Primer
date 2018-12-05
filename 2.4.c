#include<stdio.h>
#include "1.4.h"

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

void jolly(void)
{
    printf("FOr h's a jolly good felloe!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}
