#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int score;
    printf("�п�J���Z�G");
    scanf("%d",&score);

    if((score<0) || (score>100))
        printf("���Z��J���~�I\n");

    if ((score<60)&&(score>49))
        printf("�ݭn�ɦҡI\n");

    if ((score>=59)&&(score<=100))
        printf("������o�Ǥ��I\n");

    system("pause");
    return 0;
}
