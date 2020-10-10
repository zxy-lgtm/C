#include <stdio.h>
int main<void>
{
	int n1;
	int n2 = 1;
	printf("请输入一个整数");scanf("%d",&n1);
	while(n2<n1)
		n2*=2;
		printf("%d ",n2);

	return 0;
}
