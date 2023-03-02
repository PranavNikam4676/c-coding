#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,ch,res;
float ans;

printf("Enter 2 Numbers");
scanf("%d%d",&a,&b);

printf("1.Addition \n2.Substraction \n3.Multiplication \n4.Division");
scanf("%d",&ch);

switch(ch)
{
case 1: res=a+b;
	printf("Result of Addition is %d",res);
	break;
case 2: res=a-b;
	printf("Result of Substraction is %d",res);
	break;
case 3: res=a*b;
	printf("Result of Multiplication is %d",res);
	break;
case 4: ans=a/b;
	printf("Result of Division is %f",ans);
	break;
default : printf("Case not found");
}
getch();
}