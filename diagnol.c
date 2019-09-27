#include<stdio.h>

void main()
{
int i,j,n;
int a[10][10];

printf("Enter the order of matrix");
scanf("%d", &n);

printf("Enter the Matrix");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("The diagnol is\n");

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j || (i+j)==n-1 )
printf("%d ", a[i][j]);
else
printf("  ");
}
printf("\n");
}

}
