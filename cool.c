#include<stdio.h>
int main()
{
int c;
char *name;
printf("Enter your name\n");
scanf("%s",name);
printf("Enter your coolness level\n");
scanf("%d",&c);
if(c>7)
printf("%s  you are cool\n",name);
else
printf("%s better luck next time.",name);
return 0;
}
