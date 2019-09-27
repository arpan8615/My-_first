#include<stdio.h>

int front=0;
int back=0;
int queue[10];
int i,j;

void push(int x)
{
if(front==10)
{
front=0;
}
else
{
queue[front++]=x;
}
}

void pop()
{
j=queue[back];
printf("The first element is\n");
printf("%d\n",j);
back++;
/*for(i=1;i<=front;i++)
{
queue[i-1]=queue[i];
}*/
}

void disp()
{
printf("The queue is\n");
for(i=back;i<front;i++)
printf("%d",queue[i]);
printf("\n");
}

void main()
{

push(5);
push(6);
push(7);
push(8);

disp();

pop();

disp();

pop();

disp();

}
