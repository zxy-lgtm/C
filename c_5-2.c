#include <stdio.h>
int main(void)
{
	int i;
	int v[5];
	int j = 6;
	for (i=0;i<5;i++){
		v[i]= j;
		j -= 1;
		printf("v[%d] = %d\n",i,j);
	}
	return 0;
}
	
