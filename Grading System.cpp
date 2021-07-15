







#include<stdio.h>
int main()
{
int a;
int b;
int c;
int avg;
printf("Enter maths\n");
scanf("%d",&a);
printf("Enter eng\n");
scanf("%d",&b);
printf("Enter chem\n");
scanf("%d",&c);
avg=((a+b+c)/3);
printf("avg%d\n",avg);{

if(avg>=70&&avg<=100)
{
	printf("GRADE A");
}
else if(avg>=69&&avg<=60)
{
	printf("GRADE B");
}
else if (avg>=59&&avg<=50)
{
	printf("GRADE C");
}
else if(avg>=49&&avg<=40)
{
	printf("GRADE D");
}
else 
{
	printf("FAIL");
} 
}
return 0;

}