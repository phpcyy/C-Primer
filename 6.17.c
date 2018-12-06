#include<stdio.h>

int main(void)
{
    double money = 1000000;

    int i = 0;

    while (money > 0) {
        money *= 1.08;
        money -= 100000;
        i++;
    }

    printf("After %d years, Chuckie will withdraw all his money.", i);
}
