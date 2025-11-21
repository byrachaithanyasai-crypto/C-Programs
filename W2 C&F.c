#include<stdio.h>
int main()
{
float Celsius, fahrenheit;
printf("Enter Temp in Fahrenheit:");
scanf("%f",&fahrenheit);
Celsius=(fahrenheit-32)/1.8;
printf("Temparature in Celsius:%2f",Celsius);
return 0;
}
