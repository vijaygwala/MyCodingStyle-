#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter your number:"<<endl;
	cin>>n;
	
	int s;
	for(s = 1; s*s <= n; s++);
	s--;
	
	double x;
	for(double d = 0.001; d < 1.0; d+= 0.001)
	{
		x = (double)s + d;
		if((x*x > (double)n))
		{
			x -= 0.001;
			break;
		}
	}
	
	printf("square root is %.2lf\n", x);
	
	return 0;
}
