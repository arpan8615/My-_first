#include<string.h>
#include<stdio.h>

void compare();
void copy();
void str();

void main()
{

char *b="world1";
char *a="world war 2";
char *main="The world is going to end";
char *sub="going";
char *c;

compare(a,b);
copy(a,c);
str(main,sub);

}


void compare(char *a,char *b)
{
int i,j,c;

for(i=0;a[i]!='\0';i++)
{
if(a[i]==b[i])
	{
		c=1;
	}
else
	{
		c=0;
	}
}

if(c==1)
printf("The strings are same\n");
else
printf("The strings are different\n");
}

void copy(char *a,char *c)
{

c=a;

printf("%s\n",c);
}

void str(char *main, char *sub)
{
int a,b,i,j,k;
a=strlen(main);
b=strlen(sub);
//printf("%d %d", a , b);
for(i=0;i<a;i++)
{
	j=0;
	do{	
		if(main[i+j]==sub[j])
		j++;
	  }
	while(main[i+b-1]==sub[j+b-1]);
		if(j==b-1)
			break;
}
for(k=i;k<a;k++)
printf("%c",main[k]);
}




















