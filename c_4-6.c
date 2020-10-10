#include <stdio.h>
int main(void)
{
	int no;
	int n1 = 0;
	printf("请输入一个整数");scanf("%d",&no);
	if(no%2 != 0){
		no = no-1;
	}
	else{
		no = no;
	}
	printf("%d\n",no);
	while(n1<no){
		n1+=2;
		printf("%d ",n1);
	}
	return 0;
}
	
		
