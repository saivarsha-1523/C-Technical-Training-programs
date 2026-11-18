#include<stdio.h>
int main()
{
int n,c=0;
scanf("%d",&n);
if(n<=0)
{
printf("invalid\n");
}
else{
for(int i=1; i<=n; i++)
if(n%i==0) {
c++;
}
}
if(c==2){
printf("prime is");
}
else{
printf("not prime is");
}
return 0;
}