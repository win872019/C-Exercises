#include<stdio.h>
int main(void)
{
int score;
int count=0,count1=0,count2=0,count3=0;

here:
printf("��J�ǥͦ��Z�G");
scanf("%d",&score);

count++;

if (score>75)
{
printf("���Z��A\n");
count1++;
}

else if (score>60)
{printf("���Z��B\n");
count2++;
}

else
{printf("���Z��C\n");
count3++;
}
if (count<10)goto here;

printf("�w��J10��ǥͪ����Z\n\n");

printf("���Z��A�̦@��%d��\n",count1);

printf("���Z��B�̦@��%d��\n",count2);

printf("���Z��C�̦@��%d��\n",count3);
}
