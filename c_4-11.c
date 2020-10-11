#include <stdio.h>
int main(void)
{
	int no;
	do {
		printf("请输入一个整数");
		scanf("%d",&no);
		if (no < 0){
			printf("请不要输入负数\a\n");
		}
	}while (no < 0);
	printf("%d的逆向显示的结果是:",no);
	while (no > 0){
		printf("%d",no%10);
		no /= 10;
	}
	puts(".");
	return 0;
}


	
