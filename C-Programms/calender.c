/*Program to find 1st day of a year after 2001*/
#include<stdio.h>
#include<conio.h>
int main()
{

    int yr,td,tyr,lpyr,r;
    printf("Enter a year :");
    scanf("%d",&yr);
    if(yr>2001)
    {
        tyr=yr-2001;
    }
    else
     {
         tyr=2001-yr;
     }
     lpyr=tyr/4;
     td=tyr*365-lpyr;
     r=td%7;
     if(r%7==0)
        printf("MONDAY ON 01/01/%d",yr);
     else
     {
         if(r%7==1)
         printf("TUESDAY ON 01/01/%d",yr);
         else
         {
             if(r%7==2)
                printf("WEDNESDAY ON 01/01/%d",yr);
             else
             {
                 if(r%7==3)
                    printf("THURESDAY ON 01/01/%d",yr);
                 else
                 {
                     if(r%7==4)
                        printf("FRIDAY ON 01/01/%d",yr);
                     else
                     {
                         if(r%7==5)
                            printf("SATURDAY ON 01/01/%d",yr);
                         else
                         {
                             if(r%7==6)
                                printf("SUNDAY ON 01/01/%d",yr);
                         }
                     }
                 }
             }
         }
     }
     return 0;
}
