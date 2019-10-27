#include<stdio.h>
int main()
{
	
#if 1
	int a=1,b=1,c=0,d=1;
	printf("%d\n%d\n",a,b);
	for(int i=1;d<=8;i++)
	{
		c=a+b;
		a=b;
		b=c;
		if(c%2!=0)
		{
			printf("%d\n",c);
			d++;
		}
	}
#else
	int a=1,b=1,c=0,d=1;
	for(int i=1;d<=10;i++)
	{
		c=a+b;
		a=b;
		b=c;
		if(c%3==0)
		{
			printf("%d\n",c);
			d++;
		}
	}
#endif
	return 0;
}