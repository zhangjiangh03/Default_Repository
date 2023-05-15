#include <stdio.h>
int main()
{
int t,a,b,c,d;
int i;
scanf("%d",&i);
if(i>0 && i<=100)
{

 	switch((int)i / 10)
{
case 10:
case 9:
	printf("A\n ");
	break;
case 8:
	printf("B\n ");
	break;
case 7:
	printf("C\n ");
	break;
case 6:
	printf("D\n ");
	break;
case 5:
case 4:
case 3:
case 2:
case 1:
case 0:
	printf("E\n ");
	break;
}
}
else
{
	printf("error\n");
}
printf("请输入4个数：");
scanf("%d%d%d%d",&a,&b,&c,&d);
 if (a > b)
 {
 	t = a;
 	a = b;
 	b = t;
 }
 if (a > c)
 {
 	t = a;
 	a = c;
 	c = t;
 }
 if (a > d)
 {
 	t = a;
 	a = d;
 	d = t;
 }
 if (b > c)
{
 	t = b;
 	b = c;
 	c = t;
}
if (b > d)
{
 	t = b;
 	b = d;
 	d = t;
}
if (c > d)
{
t = c;
 	c = d;
 	d = t;
}
printf("由小到大输出:%d %d %d %d\n",a,b,c,d);
return 0;
}
