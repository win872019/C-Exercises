#include<stdio.h>
#include<stdlib.h>
int main(void)

{
    char a[10];
    char b[10];
    char c[10];
    printf("¿é¤J¦r¦ê1¡G");
    scanf("%s",a);
    printf("\"¦r¦ê1=%s\"\n",a);

    printf("¿é¤J¦r¦ê2¡G");
    scanf("%s",b);
    printf("¦r¦ê2=\\%20s\\\n",b);

    printf("¿é¤J¦r¦ê3¡G");
    scanf("%s",c);
    printf("¦r¦ê3=\\%-20s\\\n",c);

    system ("pause");
    return 0;
}
