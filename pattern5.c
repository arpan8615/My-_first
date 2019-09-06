#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{

for(int j=n;j>i;j--)
{
printf(" ");
}
for(int k=1;k<=i;k++)
{
printf("%d",k);
}
printf("\n");
}
for(int s=n;s>0;s--)
{
for(int j=0;j<(n-s);j++)
{
printf(" ");
}
for(int i=1;i<=s;i++)
{
printf("%d",i);
}

printf("\n");
}
return 0;
}
