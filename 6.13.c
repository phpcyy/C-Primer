#include<stdio.h>

int main(void)
{
    int arr[8];
    for(int i = 0; i < 8; i++)
    {
        arr[i] = 1;
        for (int j = 0; j < i; j++)
        {
            arr[i] *= 2;
        }
    }

    int i = 0;
    do {
        printf("%d\n", arr[i]);
        i++;
    } while (i < 8);
    
    return 0; 
}
