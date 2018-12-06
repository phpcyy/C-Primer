#include<stdio.h>
#define CARRY 60

int main(void)
{
    int minutes;
    while (1) {
        printf("Please input the minutes: ");
        scanf("%d", &minutes);
        if (minutes <= 0) {
            break;
        }
        printf("%d hours and %d minutes\n", minutes / 60, minutes % 60);
    }

    return 0;
}

