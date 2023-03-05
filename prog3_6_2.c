#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i=97;
    printf("ASCII(%d)=%c\n",i,i); /* ASCII(97)=a */

    int e='97';
    printf("ASCII(%d)=%c\n",e,e); /* ASCII(14647)=7 */

    int h='a';
    printf("ASCII(%d)=%c\n",h,h); /* ASCII(97)=a */


    char c=97;
    printf("ASCII(%d)=%c\n",c,c); /* ASCII(97)=a */

    char b='97';
    printf("ASCII(%d)=%c\n",b,b); /* ASCII(55)=7 */

    char g='a';
    printf("ASCII(%d)=%c\n",g,g); /* ASCII(97)=a */

    system("pause");
    return 0;
    }



