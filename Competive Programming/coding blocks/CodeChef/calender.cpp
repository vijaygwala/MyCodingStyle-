#include<iostream>
using namespace std;
int main()
{
	int year;
	int month;
	int day;
	cin>>day;
	cin>>month;
	cin>>year;
	cout<<year<<":"<<month<<":"<<day<<endl;
	if(month==01)
	{
		if(day<31)
			day=day+1;
		else
		day=1;
	}
	else if(month==02)
	{
		if(year%4==0 || year%400==0 && year%100!=0)
		{
			if(day<29)
			 	day=day+1;
			 else
			 	day=1;
		}
		else
		{if(day<28)
			day=day+1;
		else
			day=1;
		}
		
	}
	else if(month==03)
	{
		if(day<31)
			day=day+1;
		else
			day=1;
	}
	else if(month==04)
	{
		if(day<30)
		 day=day+1;
		else
			day=1;
	}
	else if(month==05)
	{
		if(day<31)
			day=day+1;
		else
			day=1;
	}
	else if(month==06)
	{
		if(day<30)
			day=day+1;
		else
			day=1;
	}
	else if(month==07)
	{
		if(day<31)
			day=day+1;
		else
			day=1;
	}
	else if(month==8)
	{
		if(day<31)
			day=day+1;
		else
			day=1;
	}
	else if(month==9)
	{
		if(day<30)
			day=day+1;
		else
			day=1;
	}
	else if(month==10)
	{
		if(day<31)
		 day=day+1;
		else
			day=1;
	}
	else if(month==11)
	{
		if(day<30)
			day=day+1;
		else
			day=1;
	}
	else
	{
		if(day<31)
			day=day+1;
		else
			day=1;
	}
	cout<<day;
}

