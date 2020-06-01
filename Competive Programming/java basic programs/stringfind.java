import java.util.Scanner;
class Findstring
{
	void checkstring(String s,String p)
		{
		int i,j,flag=0;
		for(i=0;i<=s.length()-p.length();i++)
			{
			for(j=i;j<i+p.length();j++){
			flag=1;
		if(s.charAt(j)!=p.charAt(j-i))
			{
			flag=0;
			break;

			}
			}
			if(flag==1)
				break;
			}
			if(flag==1)
				System.out.println("matched");
			else
				System.out.println("not matched");
		}
public static void main(String[] args)
	{
	Findstring f=new Findstring();
	Scanner s=new Scanner(System.in);
	System.out.println("enter the string 1:");
	String s1=s.nextLine();
	System.out.println("enter the string to be searhced:");
	String s2=s.nextLine();
	f.checkstring(s1,s2);
	}
}


