#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num;

    printf("��J�@�Ӿ�ơG");
    scanf("%d",&num);

    if(num%2!=0)
      printf("%d����Q2�㰣�A\n�ҥH%d�O�_��\n",num,num);

    else
      printf("%d�i�H�Q2�㰣�A\n�ҥH%d�O����\n",num,num);



    system("pause");
    return 0;
}
