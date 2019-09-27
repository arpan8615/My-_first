#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{

for(int j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
for(int s=n;s>0;s--)
{
for(int i=1;i<=s;i++)
{
printf("%d",i);
}
printf("\n");
}
return 0;
}
