#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char ch1,ch2,ch3,ch4;

    printf("請輸入第一個字元：");
    scanf("%c",&ch1);


    printf("請輸入第二個字元：");
    scanf(" %c",&ch2);

    fflush(stdin);
    printf("請輸入第三個字元：");
    scanf("%c",&ch3);

    fflush(stdin);
    printf("請輸入第四個字元：");
    scanf("%c",&ch4);

    printf("ch1=%c, ch2=%c,ch3=%c,ch4=%c\n",ch1,ch2,ch3,ch4);

    system ("pause");
    return 0;

}
