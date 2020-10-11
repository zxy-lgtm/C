#include <stdio.h>
int main(void)
{
	int no;
	int digit = 0;
	printf("请输入一个整数");scanf("%d",&no);
	while (no > 0){
		no = no/10;
		digit +=1;
	
	}
	printf("%d\n",digit);
	return 0;
}	

