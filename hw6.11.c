#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int time;

printf("輸入工作時數：");
scanf("%d",&time);

if (time<=60)
    printf("實領薪資：%.2f元\n",(float)time*75);

    else if (time>=61 && time<=75)
    printf("實領薪資：%.2f元\n",(float)(time-60)*75+(60*75));

            else
            printf("實領薪資：%.2f元\n",(float)(time-75)*(1.75*75)+(1.25*75)*15+(60*75));


    system("pause");
    return 0;
}
