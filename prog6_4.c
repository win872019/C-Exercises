#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num;

    printf("輸入一個整數：");
    scanf("%d",&num);

    if(num%2!=0)
      printf("%d不能被2整除，\n所以%d是奇數\n",num,num);

    else
      printf("%d可以被2整除，\n所以%d是偶數\n",num,num);



    system("pause");
    return 0;
}
