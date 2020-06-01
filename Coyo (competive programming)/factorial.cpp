 #include<iostream>
 using namespace std;
 int fact(int n)
{
	if(n==1)
		return 1;
	return n*fact(n-1);
}
int main()
{
	int n,factorial;
	cout<<"enter a number  between 50 to 100 inclusively :"<<endl;
	cin>>n;
	factorial=fact(n);
	cout<<factorial<<endl;
}
