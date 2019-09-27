#include<stdio.h>

void main()
{
int c[3]={1,2,3};
int a[3][3]={1,2,3,4,5,6,7,8,9};
int b[3][3];
int i,j;

for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				printf("%d",j[a][i]);
			}
	}
printf("\n");
for(j=0;j<3;j++)
		{
			printf("%d",j[c]);
		}
}
