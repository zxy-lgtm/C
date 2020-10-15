#include <stdio.h>
int min(int a,int b,int c)
{
	int min = a;
	if (min>b) min = b;
	if (min>c) min = c;
	return min;
}
int main (void)
{
	int a,b,c;
	printf("请输入a:\n请输入b:\n请输入c:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("它们的最小值:%d\n",min(a,b,c));
	return 0;
}	

