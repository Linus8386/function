




//Add, Sub, Mul, Div, Rem.
#include <stdio.h>
int main()
{
	int a,b,add,sub,mul,div,rem;
	printf("Enter a,b values:");
	scanf("%d%d",&a,&b);
	//Reading two values
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b
	rem=a%b;
	a+=10;
	
	printf("Result of addition=%d\n",add);
	printf("Result of substraction=%d\n",sub);
	printf("Result of multiplication=%d\n",mul);
	printf("Result of division=%d\n",div);
	printf("Result of reminder=%d\n",rem);
	
	return 0;
	
}