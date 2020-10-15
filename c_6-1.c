#include <stdio.h>

int min(int a,int b)
{
	int min=(a<b) ? a : b;
	return min;
}
int main (void)
{
	int a,b;
	printf("请输入a:");
	scanf("%d",&a);
	printf("请输入b:");
	scanf("%d",&b);
	printf("它们的最小值为:%d\n",min( a, b));

	return 0;
}

