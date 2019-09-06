#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
if(a>96 && a<124)
a=a-32;
else if(a>64 && a<97)
a=a+32;
printf("%c",a);
return 0;
}
