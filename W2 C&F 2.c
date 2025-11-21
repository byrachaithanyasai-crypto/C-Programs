#include<stdio.h>
int main()
{
float Celsius, fahrenheit;
printf("Enter Temp in Celsius:");
scanf("%f",&Celsius);
fahrenheit=(1.8*Celsius)+32;
printf("Temparature in fahrenheit:%2f",fahrenheit);
return 0;
}
