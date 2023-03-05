#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num;

    printf("輸入體重：");
    scanf("%d",&num);

    if (num>90)
    printf("體重過重\n");
    if (num<=90)
    printf("不會過重\n");


    system("pause");
    return 0;
}
