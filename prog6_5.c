#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int score;

    printf("��J���Z�G");
    scanf("%d",&score);

    if(score<60)
    {
        if(score>=50)
            printf("�аѥ[�ɦ�\n");

        else
            printf("��������\n");
    }
    else
        printf("����ή�\n");



    system("pause");
    return 0;
}
