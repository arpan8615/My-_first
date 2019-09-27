#include<stdio.h>

int front=0;
int back=0;
int queue[10];
int i,j;

void push(int x)
{
if(front==9)
{
front=0;
queue[front++]=x;
}
else
{
queue[front++]=x;
}
}

void pop()
{
j=queue[front];
printf("The first element is\n");
printf("%d\n",j);
for(i=front;i>=back;i--)
{
queue[i]=queue[i-1];
}
back++;
}

void disp()
{
printf("The queue is\n");
for(i=back;i<9;i++)
{
if(i!=front)
printf("%d",queue[i]);
}
printf("\n");
front++;
}

void dispcirc()
{
printf("The queue is\n");
for(i=back;i<9;i++)
printf("%d",queue[i]);
printf("\n");
}

void main()
{

push(1);
push(2);
push(3);
push(4);
push(5);
push(6);
push(7);
push(8);
push(9);
push(10);
push(11);
//push(12);

dispcirc();

pop();

disp();

pop();

disp();

}
