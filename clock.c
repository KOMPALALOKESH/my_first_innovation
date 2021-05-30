#include<stdio.h>
#include<conio.h>
int main()
{
    int h=0,m=0,s=0;
    int i;
    printf("please enter the time format in hh:mm:ss");
    scanf("%d%d%d",&h,&m,&s);
    start:
    for(h=0;h<60;h++)
    {
        for(m=0;m<60;m++)
        {
            for(s=0;s<60;s++)
            {
                printf("%2d%2d%2d",h,m,s);
                if(h<12)
                {
                    printf("AM");
                }
                else
                {
                    printf("PM");
                }
                for(double i=0;i<3619999;i++)
                i++;
                i--;
            }
            s=0;
        }
        m=0;
    }
      h=0;
      goto start;
      return 0;
}
