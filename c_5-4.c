#include <stdio.h>
int main(void)
{
	int i;
	int a[5]={17,23,36};
	int b[5]={0,0,36,23,17};
	puts ("a	b");
	printf("--------\n");
	for (i=0;i<5;i++)
		printf("%d	%d\n",a[i],b[i]);
	return 0;
}


