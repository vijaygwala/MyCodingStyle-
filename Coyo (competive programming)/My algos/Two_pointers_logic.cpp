#include<bits/stdc++.h>
using namespace std;
int main()
{	int start,end,n,target,sum,result[2];
	cin>>n>>target;
	vector<int> v(n);
	for(int i=0;i<v.size();i++)
		cin>>v[i];
	start=0;
	end=v.size()-1;
	while(start<end)
	{
		sum=v[start]+v[end];
		if(sum==target)
		{result[0]=v[start];
		result[1]=v[end];
		break;
		}
		else if(sum<target)
			start++;
		else if(sum>target)
			end--;
			
	}
	
	cout<<result[0]<<" "<<result[1]<<endl;
}
