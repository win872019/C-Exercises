#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    double a,b;

    printf("請輸入攝氏溫度：");
    scanf("%lf",&a);

    b=(9.0/5)*a+32;
    printf("華氏溫度為：%.3f\n",b);

    system("pause");
    return 0;
}
