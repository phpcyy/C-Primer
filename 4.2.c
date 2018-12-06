#include<stdio.h>
#include<strings.h>
int main(void)
{
    char name[30];
    printf("请输入您的姓名\n");
    scanf("%s", name);

    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", (int)strlen(name) + 3, name);
}
