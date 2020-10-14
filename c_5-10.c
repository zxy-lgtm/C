#include<stdio.h>
int main(void)
{
	int i,j;
	int t[4][3];
	int v[3][4];
	int n[3][3];
	for (i=0;i<4;i++){
		for (j=0;j<3;j++)
			scanf("%d",&t[i][j]);
	}
	for (i=0;i<3;i++){
		for(j=0;j<4;j++)
			scanf("%d",&v[i][j]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			n[i][j]=t[i][j]*v[i][j];
			printf("%6d",n[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
