#include<stdio.h>

int i,j;
int stack[10];
int top=-1;

void push(int x)
{
if(x==-2)
return ;
else
stack[++top]=x;
}

disp()
{

for(i=0;i<=top;i++)
{
printf("%d ",stack[i]);
}
}

void main()
{

for(i=0;i!=-1;i++)
{
scanf("%d",&i);
push(i);
}
disp();
}
