#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int year;

    printf("輸入西元年：");
    scanf("%d",&year);


    if (year<=100 && year%4=0 && year%100!=0)
        printf("閏年\n");

    else if (year>100 && year<400 && year%4=0 && year%100!=0)
        printf("閏年\n");

            else if(year>=400 && 4000)
                   printf("秋季\n");

                    else if (month>0 && month<=2 || month==12)
                         printf("冬季\n");

                 else
                    printf("輸入錯誤\n");

    system("pause");
    return 0;
}
