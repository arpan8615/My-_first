#include<stdio.h>

struct login {
char name[100];
int age;
float psno;
};


void main()
{
struct login l1;
printf("Enter name , age , psno");
scanf("%s %d %f",l1.name,&l1.age,&l1.psno);

printf("The details are %s %d %f",l1.name,l1.age,l1.psno);
}
