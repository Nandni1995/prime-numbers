#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a,b,c;
clrscr();
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
for(i=a+1;i<b;i++)
{
c=0;
for(j=2;j<i/2;++j)
{
if(i%j==0)
{
c=1;
break;
}
}
if(c==0)
printf("%d\n",i);
}
getch();
}
