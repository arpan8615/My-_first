/*
*Name: Arpan Modi	
*Date: 19 th September 2019
*Descripton: Understaing Process Address Space
*/



#include<stdio.h>

//Gloabal Variable Declaration

static int sgvar_1;				//uninitalized static variable
static int sgvar_2=20;				//initalized static variable

int gvar_1;					//uninitalized variable
int gvar_2=10;					//initalized variable

int main(int argc,char * argv[])
{


int loc=10;

printf("main:   %p\n",main);
printf("gvar_1: %p\n",&gvar_1);
printf("gvar_2: %p\n",&gvar_2);

printf("sgvar_1: %p\n",&sgvar_1);
printf("sgvar_2: %p\n",&sgvar_2);

printf("loc: %p\n",&loc);

return 0;
}
