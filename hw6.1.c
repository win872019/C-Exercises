#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char c;

    printf("��J�@�Ӧr���μƦr�G");
    scanf("%c",&c);

    if (c>=48 && c<=57)
        printf("�����Ʀr\n");
    if ((c>=97 && c<=122) || (c>=65 && c<=90))
        printf("�����r��\n");

    system("pause");
    return 0;
}
