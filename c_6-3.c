#include <stdio.h>
int cube(int x)
{
	
	return x*x*x;
}
int main (void)
{
	int s;
	printf("请输入一个整数:");
	scanf("%d",&s);
	printf("该数的立方为:%d\n",cube(s));
	return 0;
}
