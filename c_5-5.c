#include <stdio.h>
#define NUMBER 7  
int main(void)
{
	printf("%d\n",NUMBER);
	int i;
	int x[NUMBER];
	for (i=0;i<NUMBER;i++){
		printf("x[%d]:",i);
		scanf("%d",&x[i]);
	}
	for (i=0;i<(NUMBER-1)/2;i++){
		int tem=x[i];
		x[i]=x[6-i];
		x[6-i]=tem;
	}
	for (i=0;i<NUMBER;i++)
		printf("x[%d]=%d\n",i,x[i]);

	return 0;
}


