#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,n;

    do
    {
     printf("��J�@����Ʃ_�ơG");
     scanf("%d",&n);
     }
     while (n<=0||n%2==0||n==1);

    int sum=0;
     for(i=1;i<=n;i=i+2)

       sum+=i;
       printf("1+3+...+%d=%d",n,sum);



}
