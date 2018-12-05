#include<stdio.h>

int main(void)
{
    unsigned long long a = 65;
    printf("size of unsigned long long: %zu\n", sizeof(a));
    
    char b = 'A';
    printf("'A' == 65: %d\n", a==b);
    printf("size of char: %zu\n", sizeof(b));

    float c = 1e20;
    printf("size of float: %zu\n", sizeof(c));
    
    int maxInt = (1 << 30) - 1 + (1 << 30);
    printf("%d\n", maxInt+1);
    
    float d = .1234E-5;
    printf("%f", d);
}
