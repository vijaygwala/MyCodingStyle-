#include<stdio.h>
int sum_square(int);
int main()
{
	int n=12,count=0;
	while(n!=1)
	{
		n = sum_square(n);
		printf("%d\t",n);
		if(count==1000)
		break;
		count++;
	}
	return 0;
}


int sum_square(int x)
{
	int sum =0;
	while(x>0)
	{
		sum += (x%10)*(x%10);
		x /=10;
	}
	return sum;
}
