//AREA OF RECTANGLE
#include<stdio.h>
int main()
{
float len,wid,area;
printf("Enter length & width of Rectangle (in cm): ");
 scanf("%f%f", & len, &wid);

// calculate area 
area=len*wid;

// display result

printf("Area of Rectangle= %.3 f cm\n",area); 
return 0;
}
