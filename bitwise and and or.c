#include<stdio.h>
int main( )
{
	int X,Y,and,or;
	printf("enter X,Y values");
	scanf("%d%d",&X,&Y);
	and=X&Y;
	printf("bitwise and=%d",and);
	or=X&Y;
	printf("bitwise or=%d",or);
	return 0;
}
