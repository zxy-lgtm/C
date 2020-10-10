#include <stdio.h>

int main()
{
    int n1,n2,mi;
    printf("请输入一个数:\n");scanf("%d",&n1);
    printf("请输入一个数\n");scanf("%d",&n2);
    mi=(n1>n2) ? n1-n2:n2-n1;
    if(mi<=10)
        puts("<=10");
    else {
        puts(">10");
    }
    return 0;
}
