#include <stdio.h>
int main(void)
{
	int n;
	int i;
	printf("显示多少个*");scanf("%d",&n);
	for (i=0;i<=n;i++){
			
			if (i%5==0){
				printf("\n");
			}
			printf("*");
			
	}
	printf("\n");
	return 0;
}
				


