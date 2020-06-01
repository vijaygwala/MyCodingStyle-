import java.util.regex.*;
import java.util.Scanner;
class Password
{
	void checkpassword(String s)
	{
		int len=s.length();
		if(8<=len && len<=32)
		{
		Pattern p=Pattern.compile("[^a-zA-z0-9!@#$%^&*()-+]");
		Matcher m=p.matcher(s);
		if(m.find())
			System.out.println("invalid");
		else
			System.out.println("valid");
		}
		else 
			System.out.println("invlid");

		

	}
	public static void main(String[] args)
	{
		Scanner s=new Scanner(System.in);
		Password p=new Password();
		System.out.println(" Enter the password :");
		String k=s.nextLine();
		p.checkpassword(k);

	}
}