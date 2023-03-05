#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    short sum=10,a=3,s=100; /*可以直接逗號 接其他變數等於的值*/

    sum=s+a;
    printf("s+a=%d\n",sum); /*這邊()的sum只理上一行的sum,並不會被最上面宣告short的sum=10影響*/

    sum=s+2;
    printf("s+2=%d\n",sum);

    system("pause");
    return 0;
    }
