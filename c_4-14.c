#include <stdio.h>
int main(void)
{
	int n;
	int k = 0;
	int m;
	int i = 0;
	printf("请输入一个整数");scanf("%d",&n);

	do {
		switch(k%10){
			case (0):
				printf("1");
				
				k++;
				i++;
				break;
			case (1) :
				printf("2");
				
				k++;
				i++;
				break;
			case (2) :
				printf("3");
				
				k++;
				i++;
				break;
			case (3) :
				printf("4");
				
				k++;
				i++;
				break;
			case (4) :
				printf("5");
				
				k++;
				i++;
				break;
			case (5) :
				printf("6");
				
				k++;
				i++;
				break;
			case (6) :
				printf("7");
				
				k++;
				i++;
				break;
			case (7) :
				printf("8");
				
				k++;
				i++;
				break;
			case (8) :
				printf("9");
				
				k++;
				i++;
				break;
			case (9) :
				printf("0");
				
				k++;
				i++;
				break;
		}
			


	}while(i < n);
	return 0;
}


