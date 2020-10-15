#include <stdio.h>
int sqr(int x)
{
	return x*x;
}
int main (void)
{
	int s;
	printf("请输入一个数:");
	scanf("%d",&s);
	printf("该数的四次方是:%d\n",sqr(sqr(s)));
	return 0;
}
