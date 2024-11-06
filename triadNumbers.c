#include<stdio.h>
int main()
{
int m,n,p,num;
int i,k,dl,d2,d3;
for(num=100;num<=999/3;num++)/*Loop A*/
{
for (i=num; i<= 3 *num; i+=num) / * loop B * /
{
k=i;
dl=k%lO; k/=lO;
d2=k%10; k/=lO;
d3=k%10; k/=lO;
if (dl==d2 II d2==d3 II d3==dl)
goto nextnum;
}
for(m=num;m>O;m/=lO) /*Loop c*/
{
dl=m%lO;
for(n=num*2;n>O;n/=lO) /*Loop D*/
{
d2=n%lO;
for(p=num*3;p>O;p/=lO) /*Loop E*/
{
d3=p%lO;
if (dl';'=d211 d2==d311 dl==d3)
goto nextnum;
} / *End of Loop E* /
} / *End of Loop D* /
}/*End of loop C*/
p r i n t f ( "% d %d %d \ t" I n um I n um* 2 , n um* 3 ) ;
nextnum:
} / *End of loop A* /
}
