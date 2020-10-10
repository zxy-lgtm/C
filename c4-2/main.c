#include <stdio.h>

int main()
{
    int sum=0;
    int no,max,min;
    int n1;
    int n2;

    printf("整数a\a");scanf("%d",&n1);
    printf("整数b");scanf("%d",&n2);
    max = n1>n2 ? n1:n2;   printf("max:%d\n",max);
    min = n1<n2 ? n1:n2;   printf("min:%d\n",min);
    no = min;      printf("no:%d\n",no);



        do{
            sum=sum+min;
            min=min+1;
            no = no+1;
           }while(no!=max);


    printf("总和为%d\n",sum);

    return 0;
}
