#include<stdio.h>

int fact(int n)
{
int fac=1;
for(int i=n;i>0;i--)
{
fac=fac*i;
}
return fac;
}


int main()
{
int n,f;
scanf("%d",&n);

f=fact(n);

printf("%d",f);
return 0;
}
