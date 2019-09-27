#include<stdio.h>
int main()
{

int c;

printf("who is the captain of indian cricket team?\n1)Dhoni\n2)Kolhi\n3)Rohith\n4)Bumrah\n");

scanf("%d",&c);
switch(c)
{
case 1:printf("Wrong, Dhoni is the x-captain\n");break;
case 2:printf("Correct\n");break;
case 3:printf("Wrong, Rohith is the vice-captain\n");break;
case 4:printf("Wrong, Bumrah is a bowler\n");break;
default:printf("enter valid choice\n");

}
return 0;
}
