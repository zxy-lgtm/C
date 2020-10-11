#include <stdio.h>
int main(void)
{
	int start,end,interval;
	int i;
	printf("开始数值");scanf("%d",&start);
	printf("最终数值");scanf("%d",&end);
	printf("中间间隔");scanf("%d",&interval);
	i = start;
	while (i <= end){
		printf ("%dcm    %.2fkg\n",i,(double)(i-100)*0.9);
		i +=interval;
	}
	return 0;
}

	
