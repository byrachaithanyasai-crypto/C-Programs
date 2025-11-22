//AREA OF CIRCLE
#include<stdio.h>
#define pi 3.14
int main()
{
float radius, area;
// take input
printf("Enter Radius of Circle(in cm):");
 scanf("%f", &radius);
// calculate area
area=pi*radius*radius;
// display result
printf("Area of Circle = %.2f cm\n",area); 
return 0;
}
