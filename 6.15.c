#include<stdio.h>

int main(void)
{
   char inputs[255];
   int i;
   
    for (i = 0; i < 255; i++){
        scanf("%c", &inputs[i]);

        if(inputs[i] == '\n')
        {
            break;
        }
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", inputs[i]);
    }

    return 0;
}
