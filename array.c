#include<stdio.h>

void main()
{
int i,j,b[10];
int a[10]= {1,2,3,4,5};

//printf("Enter the number");
//scanf("%d", &a);

for(i=0;i<5;i++);
{
b[i]=a[i]*a[i];
}

for(j=0;j<5;j++)
printf("The square is %d\n",b[j]);
}
