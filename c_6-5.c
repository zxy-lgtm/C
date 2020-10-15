#include <stdio.h>
int sumup(int n)
{
	int i;
	int sum = 0;
	for (i=1;i<n+1;i++)
		sum += i;
	return sum;
}
int main (void)
{
	int x;
	printf("请输入一个数:");
	scanf("%d",&x);
	printf("1到x之间的数之和:%d\n",sumup(x));
	return 0;
}
