#include<stdio.h>
main( )
{
int . d,m,y;·
int flag=l, isleap=O;
printf ("Enter date (dd/mm/yyyy) ") ;
scanf("%d/%d/%d",&d,&ID,&y) ;
if (y%4==0 && y%100! =0 II y%400==O)
·isleap=l;
if (y<=1850 II y>=2050)
flag=O;
else if (m<l II m>12)
flag=O;
else if (d<l)
flag=O;
else if (m==2) /*check for number of -:Jays in February* /
{
if (d>28)
flag=O;
if(d==29&&isleap)
flag=l;
else if(m==4 II m==6 II m==9 II m==ll)/*Check days in april, june,
sept, nov* /
if (d>30)
flag=O;
}
else if(d>31)
flag=O;
if (flag== 0)
printf ("Not a valid date\n");
else
printf ("Valid Date \n");
}
