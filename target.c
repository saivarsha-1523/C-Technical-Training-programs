#include<stdio.h>
int main()
{
int a,b,c,d;
int target=30;
int count=0;
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>=target)
{
count=count+1;
}
if(b>=target)
{
count=count+1;
}
if(c>=target)
{
count=count+1;
}
    printf("%d\n",count);
    return 0;
}