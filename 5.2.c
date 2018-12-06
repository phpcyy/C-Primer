#include<stdio.h>

int main(void)
{
    printf("Please input an integer: ");
    int a;
    scanf("%d", &a);

    for (int i = a; i <= a+10; i++)
    {
        printf("%d\t", i);
    }
}
