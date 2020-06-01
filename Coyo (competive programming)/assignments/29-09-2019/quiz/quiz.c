#include<stdio.h>
#include<conio.h>
int fun(int n);
int main()
{
	int count=0,num=435;
	/*char a[100];
	printf("%d",scanf("%s",a));
	return 0;*/
//	while(num)
//	{count++;
	//num>>=1;
//	}
	printf("%d",fun(2));
	return 0;
}
int fun(int n)
{
	if(n==4)
		return n;
	else
		return 2*fun(n+1);
}
