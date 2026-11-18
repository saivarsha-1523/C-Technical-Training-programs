#include<stdio.h>
int main()
{
int a;
float b;
char c;
double d;
printf("enter your values:\n");
scanf("%d %f %c %lf",&a,&b,&c,&d);
printf("the integer num:%d\n",a);
printf("the float num:%f\n",b);
printf("the char num:%c\n",c);
printf("the double num:%lf\n",d);
    return 0;
}