#include <stdio.h>
#define NUMBER 4
int main(void)
{
	int v[NUMBER];
	printf("数据个数:%d\n",NUMBER);
	for (int i=0;i<4;i++){
		printf("%d号:",i+1);
		scanf("%d",&v[i]);
	}
		printf("{%d,%d,%d,%d}\n",v[0],v[1],v[2],v[3]);
	
	return 0;
}


