#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int time;

printf("��J�u�@�ɼơG");
scanf("%d",&time);

if (time<=60)
    printf("����~��G%.2f��\n",(float)time*75);

    else if (time>=61 && time<=75)
    printf("����~��G%.2f��\n",(float)(time-60)*75+(60*75));

            else
            printf("����~��G%.2f��\n",(float)(time-75)*(1.75*75)+(1.25*75)*15+(60*75));


    system("pause");
    return 0;
}
