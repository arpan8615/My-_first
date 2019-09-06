#include<stdio.h>

void add ();
void input();

void main ()
{

 /* printf ("Enter the matrix");
  for (i = 0; i < 3; i++)							
    {
      for (j = 0; j < 3; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }


  printf ("Enter the matrix");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  scanf ("%d", &b[i][j]);
	}
    }*/

  input ();
}


void add (int a[3][3], int b[3][3])
{
  int i, j;

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf (" %d ", a[i][j] + b[i][j]);
	}
      printf ("\n");
    }
}

void input()
{
int i,j,a[3][3];
printf ("Enter the matrix");
  for (i = 0; i < 3; i++)							
    {
      for (j = 0; j < 3; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }

int k,l,b[3][3];
printf ("Enter the matrix");
  for (k = 0; k < 3; k++)							
    {
      for (l = 0; l < 3; l++)
	{
	  scanf ("%d", &b[k][l]);
	}
    }
add(a,b);
}
