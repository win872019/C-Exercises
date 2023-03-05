//參考解答，以下的code太多餘
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a=4,b=5,c=6;

    if (a+b>c || b+c>a || a+c>b)
        printf("可構成三角形\n");


    else
        printf("不可構成三角形\n");



    system("pause");
    return 0;
}
