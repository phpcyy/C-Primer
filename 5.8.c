#include<stdio.h>

int main(void)
{
    int a, b;

    printf("This program computes moduli.\n");
    
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &b);

    printf("Now enter the first operand: ");
    scanf("%d", &a);
    printf("%d %% %d is %d\n", a, b, a % b);

    while(1){
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &a);
        if (a <= 0)
        {
            break;
        }
        printf("%d %% %d is %d\n", a, b, a % b);
    }

    return 0;
}
