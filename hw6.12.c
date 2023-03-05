#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int month;

    printf("¿é¤J¤ë¥÷¡G");
    scanf("%d",&month);


    if (month>=3 && month<=5)
        printf("¬K©u\n");

    else if (month>=6 && month<9)
        printf("®L©u\n");

            else if(month<12 && month>=9)
                   printf("¬î©u\n");

                    else if (month>0 && month<=2 || month==12)
                         printf("¥V©u\n");

                 else
                    printf("¿é¤J¿ù»~\n");

    system("pause");
    return 0;
}
