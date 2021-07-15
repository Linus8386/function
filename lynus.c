//Area of a rectangle
#include <stdio.h>
int main()
{
	int area, length, width;
	printf("Enter the length\n");
	scanf("%d",&length);
	printf("Enter the width\n");
	scanf("%d",&width);
	area=length *width;
	printf("%d",area);
	return 0;
}