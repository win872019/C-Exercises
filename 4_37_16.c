#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)

{
    char str[25];
    printf("Input a string:");
    scanf("%s",str);
    fflush(stdin);
    printf("The string is %s\n",str);

    system ("pause");
    return 0;
}
