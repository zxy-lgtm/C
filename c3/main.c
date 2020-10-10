#include <stdio.h>

int main()
{
    int no;
    printf("month");scanf("%d",&no);
    if (no>=3 && no<=5)
        puts("spring");
    else if(no>=6 && no<=8)
        puts("summer");
    else if(no>=9 && no<=11)
        puts("fall");
    else
        puts ("winter");
    switch (no) {
    case 1:
    case 2:printf("winter\n");break;
    case 3:
    case 4:
    case 5:printf("spring\n");break;

    case 6:
    case 7:
    case 8:printf("summer\n");break;
    case 9:
    case 10:
    case 11:printf("fall\n");break;
    case 12:printf("winter\n");break;

    }

    return 0;
}
