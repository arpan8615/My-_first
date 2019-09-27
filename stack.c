#include<stdio.h>

int i=0,j;
int stack[10];
int top=-1;

push(int x)
{
stack[++top]=n;
}

disp()
{
while(stack[i]!='-1')
{
printf("%d",stack[i]);
i++;
}
}

void main()
{
push(5);
disp();
}
