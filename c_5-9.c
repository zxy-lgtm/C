#include <stdio.h>
#define N 80
int main(void)
{
	int i,j,num;
	int v[N];
	int p[11]={0};
	printf("请输入学生人数:");
	do{
		scanf("%d",&num);
		if (num<0 || num>100)
			printf("\a请输入1~%d之内的数!",N);
	}while(num<0 || num>N);
	printf("请输入%d人的分数.\n",num);
	for(i=0;i<num;i++){
		printf("%d号:",i+1);
		
		do{
			scanf("%d",&v[i]);
			if (v[i]<0 || v[i]>100)
				printf("请输入0~100的数");
		}while(v[i]<0 || v[i]>100);
		p[v[i]/10]++;
	}
	printf("---分布图---\n");	
	for (i=0;i<10;i++){
		if(p[i]>0){
			for (j=0;j<(3+2*i);j++){
				printf(" ");
			}
			printf("*\n");
		}
	}
	
	printf("----------------------------------\n");
	printf("0 10 20 30 40 50 60 70 80 90 100 \n");
	return 0;
}


	
	
			

