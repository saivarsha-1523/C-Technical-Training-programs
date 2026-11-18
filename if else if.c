#include<stdio.h>
int main () {
int cp,sp;
scanf("%d%d",&cp,&sp);
if(sp>cp){
printf("profit:%d",sp-cp);
}
else if(cp>sp)
{
printf("Loss:%d",cp-sp);
}
else{
printf("no loss no profit\n");
}
return 0;
}