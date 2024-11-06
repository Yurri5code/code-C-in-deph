#include<stdfo.h> .
main ( )
{
  int num, base, result;
char choice;
printf("Enter 'b' for binary and '0' for octal
scanf("%c",&choice) ;
printf ("Enter the number
scanf("%d",&num);
if (choice==' b' )
base=2;
else
base=8;
result=func(num,base) ;
printf ("Decimal number is %d\n", result) ;
}
func(int n,int base)
{
int rem,d,j=l,dec=O;
while(n>O)
{
rem=n%lO; /;; taking last digit * /
d.=rem*j;
d~c+=d;
j*=base;
n/=lO; / * skipping last digit * /
return dec;
}
