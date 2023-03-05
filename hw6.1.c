#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char c;

    printf("輸入一個字元或數字：");
    scanf("%c",&c);

    if (c>=48 && c<=57)
        printf("此為數字\n");
    if ((c>=97 && c<=122) || (c>=65 && c<=90))
        printf("此為字元\n");

    system("pause");
    return 0;
}
