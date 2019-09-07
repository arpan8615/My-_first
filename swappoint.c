#include<stdio.h>

void swap();

void main()
{

int x=5;
int y=6;
int *p=&x;
int *q=&y;

printf("The value of x before swapping is %d\n", *p);
printf("The value of y before swapping is %d\n", *q);

swap(&x,&y);

}

void swap(int *p, int *q)
{
int *a;

a=p;
p=q;
q=a;

printf("The value of x after swapping is %d\n", *p);
printf("The value of y after swapping is %d", *q);

}
