#include<stdio.h>

void display();
void check();

void main()
{
int i,j,n;
int a[3][3]={1,2,3,4,5,6,7,8,9};

display();

printf("P1 select a number");
scanf("%d",&n);
check(n);

}


void display()
{

int a[3][3]={1,2,3,4,5,6,7,8,9};
int i,j;
printf("Welcome folks!\n");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d |",a[i][j]);
}
printf("\n");
}
}

void check(int n)
{
int i,j;

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(n<=3 && (i+j)==(n-1))
printf(" * |");

else if(3<n<=6 && (i+j)==(n-1-3))
printf(" * |");

else if(6<n<=9 && (i+j)==(n-1-5))
printf(" * |");

else
printf("   |");
} 
printf("\n");
}
}









