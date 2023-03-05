#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
char ch;
printf("請輸入一個字元：");
ch=getche();
printf("   您輸入的字元是：%c\n",ch);

printf("請輸入一個字元：");
ch=getch();
printf("   您輸入的字元是：%c\n",ch);

system ("pause");
return 0;

}
