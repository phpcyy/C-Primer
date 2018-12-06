#include<stdio.h>

int main(void)
{
    char a;

   for(int i = 0; i < 6; i++) 
   {
       a = 'F';
       for(int j = i; j >= 0; j--, a--)
       {
           printf("%c", a);
       }
       printf("\n");
   }
}
