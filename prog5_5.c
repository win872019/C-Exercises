#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int a=3, b=3;

    printf("a=%d",a);
    printf(", a++���Ǧ^�Ȭ�%d",a++);
    printf(",a=%d\n",a);

    printf("b=%d",b);
    printf(", ++b���Ǧ^�Ȭ�%d",++b);
    printf(",b=%d\n",b);


    system("pause");
    return 0;
}
