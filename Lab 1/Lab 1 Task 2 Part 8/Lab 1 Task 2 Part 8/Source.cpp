#include<stdio.h>
#include <conio.h>
 
int main(void)
{
   int number1_int= 0;
 
   printf("Enter an integer: \n");
   scanf_s("%d", &number1_int);
 
   if (number1_int%2 == 0 )
      printf("Even \n");
   else
      printf("Odd \n");
 
   _getch();
   return 0;
}