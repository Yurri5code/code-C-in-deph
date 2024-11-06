#include<stdio.h>
main(
{
int dl, d2, d, ml, m2, m, yl, y2, y;
printf ("Enter first date (dd/mm/yyyy) ");
scanf("%d/%d/%d",&dl,&ml,&yl) ;
printf ("Enter second date (dd/mm/yyyy) ") ;
scanf("%d/%d/%d",&d2,&m2,&y2) ;
if(d2<dl)
{
if (m2==3)
{
if(y2%4==O && y2%lOO!=O II y2%400==O) /*check for leap*/
d2=d2+29;
else
d2=d2+28;
}
else if (m2==5 II m2==71Im2==lO Ilm2==12)
d2=d2+30;
else
d2=d2+3l;
m2=m2-1;
}
if (m2<ml)
{
y2=y2-1;
m2=m2+12;
}
y=y2-yl;
m=m2-ml;
d=d2-dl;
printf ("Difference of the two dates is ") ;
printf("%d years %d months %d days\n",y,m,d);
}
