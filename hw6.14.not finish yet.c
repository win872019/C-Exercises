#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int year;

    printf("��J�褸�~�G");
    scanf("%d",&year);


    if (year<=100 && year%4=0 && year%100!=0)
        printf("�|�~\n");

    else if (year>100 && year<400 && year%4=0 && year%100!=0)
        printf("�|�~\n");

            else if(year>=400 && 4000)
                   printf("��u\n");

                    else if (month>0 && month<=2 || month==12)
                         printf("�V�u\n");

                 else
                    printf("��J���~\n");

    system("pause");
    return 0;
}
