#include<stdio.h>
#include<conio.h>
void main()
{
	int amount;
	printf("Enter an amount");
	scanf("%d",&amount);
	if(amount>1000)
	{printf("Balance is sufficient");
	}
	else
	{printf("Insufficient balance");
	}
	getch();
}