import java.util.regex.*;
import java.util.Scanner;
public class StrongPassword
{
	void checkpassword(String s)
	{
		int len=s.length();
		int cl=0,sl=0,di=0,spc=0;
		int r=0;
		
		Pattern cap=Pattern.compile("[A-Z]");
		Pattern digit=Pattern.compile("[0-9]");
		Pattern small=Pattern.compile("[a-z]");
		Pattern sp=Pattern.compile("[!@#$%^&*()[-]+]");
		Matcher m=cap.matcher(s);
		if(m.find())
			cl=1;
		Matcher p=digit.matcher(s);
		if(p.find())
			di=1;
		Matcher q=small.matcher(s);
		if(q.find())
			sl=1;
		Matcher t=sp.matcher(s);
		if(t.find())
			spc=1;

		if(cl==0)
			r+=1;
		if(di==0)
			r+=1;
		if(sl==0)
			r+=1;
		if(spc==0)
			r+=1;
		if(len+r<6)
			r=r+6-(len+r);
		System.out.println(r);

	}
	public static void main(String[] args)
	{
		Scanner s=new Scanner(System.in);
		StrongPassword p=new StrongPassword();
		int n=s.nextInt();
		s.nextLine();
		String k=s.nextLine();
		p.checkpassword(k);

	}
}