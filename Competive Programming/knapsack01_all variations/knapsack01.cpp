#include<bits/stdc++.h>
using namespace std;
int knapsack(int weight[],int price[],int mw,int n)
{
	if(mw==0 || n==0)
		return 0;
	if(weight[n-1]<=mw)
	 return max(price[n-1]+knapsack(weight,price,mw-weight[n-1],n-1),knapsack(weight,price,mw,n-1));
	else if(weight[n-1]>mw)
		return knapsack(weight,price,mw,n-1);
		
}
int main()
{
	int weight[5]={4,10,2,3,7};
	int price[5]={10,4,3,9,2};
	int maxweight=13;
	cout<<knapsack(weight,price,maxweight,5);
}
