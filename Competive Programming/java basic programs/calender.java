import java.util.Scanner;
class Calender
{
	int  weekmonthcode(int month)
	{
		int t;
		
		if(month==01)
			t=1;
		else if(month==02)
			t=4;
		else if(month==03)
			t=4;
		else if(month==04)
			t=0;
		else if(month==05)
			t=2;
		else if(month==06)
			t=5;
		else if(month==07)
			t=0;
		else if(month==8)
			t=3;
		else if(month==9)
			t=6;
		else if(month==10)
			t=1;
		else if(month==11)
			t=4;
		else 
			t=6;
		return t;
	}
	int  yearcode(int year)
	{
		int code;
		if(1500<=year && year<=1599)
			code=0;
		else if(1600<=year && year<=1699)
			code=6;
		else if(1700<=year && year<=1799)
			code=4;
		else if(1800<=year && year<=1899)
			code=2;
		else if(1900<=year && year<=1999)
			code=0;
		else if(2000<=year && year<=2099)
			code=6;
		else if(2100<=year && year<=2199)
			code=4;
		else if(2200<=year && year<=2299)
			code=2;
		else
			code=0;
		return code;
	}
	void checkstring(int i)
	{
		String[] a={"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
		System.out.println(a[i]);
	}
	public static void main(String[] args)
	{int r1,r2,r3,r4,r5,r6,i=1,k=0,num=0,rem,yearc;
		Calender c=new Calender();
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the day , month, year");
		int day=s.nextInt();
		int month=s.nextInt();
		int year=s.nextInt();
		yearc=year;
		r1=day%7;
		while(k!=2)
		{
			rem=yearc%10;
			num=num+i*rem;
			i*=10;
			yearc=yearc/10;
			k++;
		}
		r3=num%7;
		r4=num/4;
		r4=r4%7;
		r2=c.weekmonthcode(month);
		r2=r2%7;
		r5=c.yearcode(year);
		r6=r1+r2+r3+r4+r5;
		r6=r6%7;
		//System.out.println(r1+" "+r2+" "+r3+" "+r4+" "+r5+" "+r6);
		c.checkstring(r6);

	}






		
		
}