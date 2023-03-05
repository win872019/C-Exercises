#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float x,y;

    printf("輸入x,y座標：");
    scanf("%f,%f",&x,&y);


    if (x>0 && y>0)
        printf("(%.2f,%.2f)位於第一象限\n",x,y);

    else if (x>0 && y<0)
        printf("(%.2f,%.2f)位於第四象限\n",x,y);

        else if (x<0 && y<0)
            printf("(%.2f,%.2f)位於第三象限\n",x,y);

            else if (x<0 && y>0)
                printf("(%.2f,%.2f)位於第二象限\n",x,y);

                else if (x==0 && y!=0)
                    printf("(%.2f,%.2f)位於y軸上\n",x,y);

                    else if (x!=0 && y==0)
                        printf("(%.2f,%.2f)位於x軸上\n",x,y);

                        else
                            printf("(%.2f,%.2f)位於原點\n",x,y);

    system("pause");
    return 0;
}
