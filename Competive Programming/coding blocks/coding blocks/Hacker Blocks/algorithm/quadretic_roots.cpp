#include<bits/stdc++.h>
using namespace std;
int isPerfectSquare(int number)
{
    int iVar;
    float fVar;
 
    fVar=sqrt((double)number);
    iVar=fVar;
 
    if(iVar==fVar)
        return 1;
    else
        return 0;
}
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int k=pow(b,2)- (4*a*c);
	int x=(-b + sqrt(k))/2*a;
	int y=(-b - sqrt(k))/2*a;
	if(x>y)
	{
		int tmp=x;
		x=y;
		y=tmp;
	}

	 if(k>0)
	{
		cout<<"Real and Distinct"<<endl;
		cout<<x<<" "<<y<<endl;
	}
	else if(k<0)
	{
		cout<<"Imaginary"<<endl;
	
	}
	else if(k==0)
	{
		cout<<"Real and Equal"<<endl;
		cout<<x<<" "<<y<<endl;
	}


	return 0;
}
