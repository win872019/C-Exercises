#include<stdio.h>
#include<stdlib.h>
int main(void)

{
    char a[10];
    char b[10];
    char c[10];
    printf("��J�r��1�G");
    scanf("%s",a);
    printf("\"�r��1=%s\"\n",a);

    printf("��J�r��2�G");
    scanf("%s",b);
    printf("�r��2=\\%20s\\\n",b);

    printf("��J�r��3�G");
    scanf("%s",c);
    printf("�r��3=\\%-20s\\\n",c);

    system ("pause");
    return 0;
}
