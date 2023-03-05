#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num;

    printf("輸入一個整數：");
    scanf("%d",&num);

    if (num>0)
    printf("絕對值%d\n",num);
    if (num<0)
            printf("絕對值%d\n",-num);


    system("pause");
    return 0;
}
