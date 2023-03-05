#include<stdio.h>
#include<stdlib.h>
int main(void)

{
int num1=sizeof (578);
int num2=sizeof(784000000);
int num3=sizeof(6.78f);
int num4=sizeof(718.26);
int num5=sizeof(6.42e127);
printf("size of 578 is %d\n",num1);
printf("size of 784000000 is %d\n",num2);
printf("size of 6.78f is %d\n",num3);
printf("size of 718.26 is %d\n",num4);
printf("size of 6.42e127 is %d\n",num5);

system ("pause");
return 0;
}
