#include<stdio.h>
int main()
{
    int d1,m1,y1,d2,m2,y2,a1,a2,a3;
    printf("\n\tAge Calculator\n\n");

    printf("\n\tEnter your birth day:   ");
    scanf("%d",&d1);
    printf("\n\tEnter your birth month: ");
    scanf("%d",&m1);
    printf("\n\tEnter your birth year:  ");
    scanf("%d",&y1);

    printf("\n\n\tEnter current day:   ");
    scanf("%d",&d2);
    printf("\n\tEnter current month: ");
    scanf("%d",&m2);
    printf("\n\tEnter current year:  ");
    scanf("%d",&y2);

    if((d1>31||d1<1)||(d2>31||d2<1)||(m1<1||m1>12)||(m2<1||m2>12)||(y1<0||y2<0))
    {
        printf("\n\n\terror\n\n");
    }
    else
    {
        a3=y2-y1;
            if(d2>=d1)
           {
              a1=d2-d1;
           }
            else
            {
              m2=m2-1;
              d2=d2+30;
              a1=d2-d1;
            }
        if(m2>=m1)
        {
            a2=m2-m1;
        }
        else
        {
            a3=a3-1;
            m2=m2+12;
            a2=m2-m1;
        }
    }
    printf("\n\n\tYour age is %d year %d month %d day.\n\n",a3,a2,a1);
}
