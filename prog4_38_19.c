#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int num;
char ch;
printf("請輸入一個整數：");
scanf("%d",&num);
fflush(stdin);

printf("請輸入一個字元：");
ch=getchar();
printf("num=%d,ASCII of ch=%d\n",num,ch);


system ("pause");
return 0;

}
