#include <stdio.h>
#define NUMBER 80
int main(void)
{
	int i,j;
	int num;
	int v[NUMBER];
	int p[11] = {0};
	printf("请输入学生人数:"); 
	do{
		scanf("%d",&num);
		if (num<1 || num >NUMBER)
			printf("\a请输入学生1~%d的人数:",NUMBER);
	
	}while (num<1 || num>NUMBER);
	for (i = 0;i<num;i++){
		printf("%d号",i+1);
		do{
			scanf("%d",&v[i]);
			if (v[i]<0 || v[i]>100)
				printf("请输入0~100的数.");
		}while(v[i]<0 || v[i]>100);
		p[v[i]/10]++;
	}
	puts("\n---分布图---");
	for (i=0;i<10;i++){
		printf("%d~%d:",i*10,i*10+9);
		for (j=0;j<p[i];j++){
			printf("*");
		}
		printf("\n");
	}
	printf ("100:");
	for (j=0;j<p[10];j++)
		printf("*");
	printf("\n");
	return 0;
}


