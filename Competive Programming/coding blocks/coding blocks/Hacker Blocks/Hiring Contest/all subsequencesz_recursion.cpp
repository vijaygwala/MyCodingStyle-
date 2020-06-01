#include<bits/stdc++.h>
using namespace std;
set<string> ar;
void allSub(string input,string output)
{
	if(input.length()==0){
		ar.insert(output);
		return;
	}
	allSub(input.substr(1),output);
	allSub(input.substr(1),output+input[0]);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		allSub(s,"");
		sort(ar.begin(),ar.end());
		for (auto it = ar.begin(); it != ar.end(); it++) 
        cout << *it << endl;
		
	}
	
}
