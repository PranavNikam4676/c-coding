#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter two Numbers");
	scanf("%d%d" ,&a,&b);
	if(a>b)
		printf("a is largest Number");
	else
		printf("b is largest Number");
	getch();
}