#include<stdio.h>
#include<conio.h>
int main()
{
	int *ptr,var=10;
	ptr=&var;
	int **ptr=&ptr;
	printf("%d",**ptr)
	
}
