import java.util.Scanner;
class Rare
{
	void checkrare(int n)
	{
		int temp=n,num=0;
		while(temp!=0)
		{
			int rem=temp%10;
			 num=num*10+rem;
			temp=temp/10;
		}
		boolean b=isPerfectSquare(n-num);
		boolean c=isPerfectSquare(n+num);
		if(b && c)
			System.out.println("Rare");
		else
			System.out.println("Not Rare");



	}
	boolean isPerfectSquare(int n) 
{ 
    for (int i = 1; i * i <= n; i++) { 
  
      
        if ((n % i == 0) && (n / i == i)) { 
            return true; 
        } 
    } 
    return false; 
}
public static void main(String[] args)
	{
	Scanner s=new Scanner(System.in);
	System.out.println("enter a number");
	int n=s.nextInt();
	Rare r=new Rare();
	r.checkrare(n);
	}
}