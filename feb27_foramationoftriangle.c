#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter values of triangle");
	scanf("%d%d%d" ,&a,&b,&c);
	if(a+b+c==180)
		printf("Triangle is formed");
	else
		printf("Triangle is not formed");
	getch();
}