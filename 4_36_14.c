#include<stdio.h>
#include<stdlib.h>
int main(void)

{
    int a;
    printf("輸入一個10進位整數：");
    scanf("%d",&a);
    printf("%d的八進位為%o, %d的十六進位為%x\n",a,a,a,a);

    system ("pause");
    return 0;
}
