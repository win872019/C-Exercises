#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    short sum=10,a=3,s=100; /*�i�H�����r�� ����L�ܼƵ��󪺭�*/

    sum=s+a;
    printf("s+a=%d\n",sum); /*�o��()��sum�u�z�W�@�檺sum,�ä��|�Q�̤W���ŧishort��sum=10�v�T*/

    sum=s+2;
    printf("s+2=%d\n",sum);

    system("pause");
    return 0;
    }
