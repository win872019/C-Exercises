#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int n;
printf("輸入一整數：");
scanf("%d",&n);



int i,sum=0;

for(i=1;i>=n;i++);
   {

    sum+=i;
    printf("+%d",sum);
   }

system ("pause");
return 0;
    }
