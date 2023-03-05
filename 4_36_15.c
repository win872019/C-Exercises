#include<stdio.h>
#include<stdlib.h>
int main(void)

{
    int a;
    printf("輸入一個16進位整數：");
    scanf("%x",&a);
    printf("%x的八進位為%o, %x的十進位為%d\n",a,a,a,a);

    system ("pause");
    return 0;
}
