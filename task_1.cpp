#include<stdio.h>

main()
{
   float fahrenheit,celsius;
   
   printf("tempratur in celsius = ");
   scanf("%f", &celsius);
   
   fahrenheit = (celsius * 9/5) + 32;
   
   printf("tempratur in fahrenheit = %.1f", fahrenheit);
}