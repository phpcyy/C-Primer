#include <stdio.h>

int main(void)
{
    int i;
    int total = 0, odd_sum = 0, even_sum = 0, odd_num = 0, even_num = 0;

    printf("Please enter some integers(0 to escape): ");

    while (1) {
        scanf("%d", &i);
        if (i == 0) 
        {
            break;
        }

        if (i % 2) 
        {
            odd_num++;
            odd_sum += i;
        } 
        else
        {
            even_num++;
            even_sum += i;
        }
    }

    printf("odd numbers' num is %d, odd numbers' average is %.2lf, even numbers' num is %d, even numbers' average is %.2lf", odd_num, (double) odd_sum / odd_num, even_num, (double) even_sum / even_num);

    return 0;
}

