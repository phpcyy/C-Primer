#include<stdio.h>
#include<strings.h>

int main(void)
{
    char firstName[30], lastName[30];
    printf("Please input your first name:");
    scanf("%s", firstName);
    printf("Please input your last name:");
    scanf("%s", lastName);

    printf("%s %s\n", firstName, lastName);
    printf("%*ld %*ld\n", (int)strlen(firstName), strlen(firstName), (int)strlen(lastName), strlen(lastName));
    printf("%s %s\n", firstName, lastName);
    printf("%-*ld %-*ld\n", (int)strlen(firstName), strlen(firstName), (int)strlen(lastName), strlen(lastName));

    return 0;
}
