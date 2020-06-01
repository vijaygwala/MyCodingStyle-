#include<bits/stdc++.h>
using namespace std;

int Index(vector<signed long> v,signed long element)
{long index;
	vector<signed long>::iterator it = find(v.begin(), v.end(), element);
	
	if (it != v.end()){
		index = distance(v.begin(), it);
		return index;
	}
	else
		return -1;
}

void median(vector<char> s,vector<signed long> x) {
	vector<signed long> v;
	int n;
	double median;
	for(int i=0;i<s.size();i++){
    if(s[i]=='a')
    {
    	v.push_back(x[i]);
    	sort(v.begin(),v.end()); 
    		n=v.size();
    		if( n%2== 0)                                                                  
  			median = (v[(n/2)-1]+v[(n/2)])/2.0;                                           
 			else                                                                           
 			 median = v[(n/2)]; 
 			 cout<<median<<endl;
	}
	else if(s[i]=='r')
    {
    	int index=Index(v,x[i]);
    	if(index!=-1){
    		v.erase(v.begin()+index);
    		sort(v.begin(), v.end()); 
    		n=v.size();
    		if( n%2== 0)                                                                  
  			median = (v[(n/2)-1]+v[(n/2)])/2.0;                                           
 			else                                                                           
 			 median = v[(n/2)];
			  if(!v.empty()) 
 			 cout<<median<<endl;
 			 else
 			 	cout<<"Wrong!"<<endl;
 		}
 		else
 			cout<<"Wrong!"<<endl;
	}
}
    
}
int main(void){


	int N;
	cin >> N;
	
	vector<char> s;
    vector<signed long> X;
	char temp;
    signed long tempint;
	for(int i = 0; i < N; i++){
		cin >> temp >> tempint;
        s.push_back(temp);
        X.push_back(tempint);
	}
	
	median(s,X);
	return 0;
}
