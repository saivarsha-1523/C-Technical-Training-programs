#include<stdio.h>
int main()
{
int n,last;
scanf("%d",&n);
while(n>=10)
{
int sum=0;
while(n>0)
{
last=n%10;
sum=sum+last;
n=n/10;
}
n=sum;
}
return 0;
}