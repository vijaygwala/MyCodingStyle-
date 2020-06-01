#include<iostream>
#define n 5
using namespace std;
int a[5][5]={ { 0, 0, 0, 0,0 },{ 0, 0, 0, 0,0 },{ 0, 0, 0, 0,0 },{ 0, 0, 0, 0 ,0},{0,0,0,0,0} };
bool safe(int r,int c)
{
	int i,j;
	for(i=0;i<c;i++)
		if(a[r][c])
			return false;
	for(i=r,j=c;i>=r && j>=c;i--,j--)
		if(a[i][j])
			false;
	for(i=r,j=c;i<n && j>=0;i++,j--)
		if(a[i][j])
			return false;
	return true;
}
bool nqueen(int i)
{if(i==n)
	return true;
for(int j=0;j<n;j++)
	{
		if(safe(i,j))
		{a[i][j]=1;
		if(nqueen(i+1))
			return true;
		a[i][j]=0;
			
		}
	}
	return false;
}
int main()
{
	
	if(nqueen(0)==false)
		cout<<"solution doesn,t exist"<<endl;
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
		
	
	
}
