#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int g[3];
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>b && a>c){
		g[0]=a;
		if(b>c)
		{g[1]=b;
		g[2]=c;
		}
		else{
			g[1]=c;
			g[2]=b;
		}
	}
	else if(b>a && b>c)
	{
		g[0]=b;
		if(a>c)
		{
			g[1]=a;
			g[2]=c;
		}
		else{
			g[1]=c;
			g[2]=a;
		}
	}
	else
	{
		g[0]=c;
		if(b>a)
		{g[1]=b;
		g[2]=a;
		}
		else
		{g[1]=a;
		g[2]=b;
		}
	}
	cout<<"second greatest numbew will be :"<<g[1]<<endl;
	
			
}
