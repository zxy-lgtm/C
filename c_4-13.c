#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;
	int i = 1;
	int w = 1;
	printf("请输入一个整数:");scanf("%d",&n);

	for (i = 1; i <= n ; i++){
		sum += i;
	}
	printf("%d到%d的和是%d\n",w,n,sum);

	return 0;
}
