#include <stdio.h>
int main(void)
{
	int no;
	printf("请输入一个整数:");scanf("%d",&no);
	while (no >0)
	{
		if (no %2 == 0)
		{
			printf("-");
		}
		if (no %2 == 1)
		{
			printf("+");
		}
	no -= 1;
	}
	return 0;
}
