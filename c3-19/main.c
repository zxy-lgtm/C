#include <stdio.h>

int main()
{
    int no;
    printf("number");scanf("%d",&no);
    switch (no%3) {
    case 0 : puts("yes");  break;
    case 1 : puts("no");break;
    case 2 : puts("no");break;

    }
    printf("Hello World!\n");
    return 0;
}
