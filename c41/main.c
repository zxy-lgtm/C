#include <stdio.h>

int main()
{
    int sum = 0;
    int n1= 0;
    int retry;
    do{


    int no;
    printf("请输入一个数:");scanf("%d",&no);
    sum = sum+no;
    n1 = n1+1;


    printf("要重复一次吗?[yes...0/no...9]:");
    scanf("%d",&retry);

    }while(retry==0);
    printf("它们的总和是%d,它们的平均数是%1f",sum,(double)sum/n1);
    return 0;
}
