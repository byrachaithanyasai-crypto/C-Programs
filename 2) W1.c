#include<stdio.h>
int main()
{
	int a;
	float b;
	char ch;
	char str[101];
	printf("ENTER A NUMBER:");
	scanf("%d",&a);
	printf("\nENTER A FLOAT POINTING VALUE:");
	scanf("%f",&b);
	printf("\nENTER A CHARACTER:");
	scanf("%c",&ch);
	printf("\nENTER A STRING:");
	scanf("%s",str);
	printf("\n%d\n%f\n\n%c\n%s",a,b,ch,str);
	return 0;
}
