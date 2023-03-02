#include<stdio.h>
#include<conio.h>
void main()
{
float marks;
float per;
printf("Enter total marks");
scanf("%f",&marks);

per=((marks/500)*100);
printf("Percent is %f",per);

if(per>=75.00)
	printf("Grade is A");
else if(per>=60.00)
    printf("Grade is B");
else if(per>=40.00)
	printf("Grade is C");
else	
	printf("Grade is F");
getch();
}
