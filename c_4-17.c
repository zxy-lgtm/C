#include <stdio.h>
int main(void)
{
	int n;
	int i;
	printf("请输入一个整数");scanf("%d",&n);
	for (i=1;i<=n;i++){
		printf("%d的平方是%d\n",i,i*i);
	}
	return 0;
}

