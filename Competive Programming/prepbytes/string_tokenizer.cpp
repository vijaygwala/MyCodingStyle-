#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c[]="my,name is vijay";
	char *p;
	p=strtok(c,",");
	while(p!=NULL)
	{
	
		cout<<p<<endl;
		p=strtok(NULL,",");
		
	}
	return 0;
}
