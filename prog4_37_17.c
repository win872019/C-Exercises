#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char ch1,ch2,ch3,ch4;

    printf("�п�J�Ĥ@�Ӧr���G");
    scanf("%c",&ch1);


    printf("�п�J�ĤG�Ӧr���G");
    scanf(" %c",&ch2);

    fflush(stdin);
    printf("�п�J�ĤT�Ӧr���G");
    scanf("%c",&ch3);

    fflush(stdin);
    printf("�п�J�ĥ|�Ӧr���G");
    scanf("%c",&ch4);

    printf("ch1=%c, ch2=%c,ch3=%c,ch4=%c\n",ch1,ch2,ch3,ch4);

    system ("pause");
    return 0;

}
