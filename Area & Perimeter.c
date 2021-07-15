






#include<stdio.h>
int nain()
{
	int A,B,sum,sub,mul,div,rem;
	printf("enter A,B values\n");
	scanf("%d%d",&A,&B);
	
	rem=A%B;
	sub=A-B;
	mul=A*B;
	div=A/B;
	sum=A+B;
	
	printf("sum%d\n",sum);
	printf("sub%d\n",sub);
	printf("div%d\n",div);
	printf("mul%d\n",mul);
	printf("rem%d\n",rem);
	return 0;
}
//width
//integer area,perimeter,L,W;
//printf("enter length\n");
//scanf("%d",&L);
//printf("enter width\n);
//scanf("%d",&w);
//perimeter=2*(L+W);
//area=L*W;

//printf("area%d\n:perimeter%d\n",area,perimeter);

//PROGRAM TO DISPLAY AREA AND PERIMETER OF A RECTANGLE
#include<stdio.h>


int main()
{
    int area,perimeter,L,W;

    printf("enter length\n");
    scanf("%d",&L);

    printf("enter width\n");
    scanf("%d",&W);

    perimeter=2*(L+W);
    area=L*W;

    printf("area%d\nperimeter%d\n",area,perimeter);

    return 0;
}