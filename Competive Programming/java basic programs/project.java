import java.util.Scanner;
interface Idcard
{
	void set_basicinfo(String Id,String Full_name,String Dob,String Dept_name);
	void get_info();
}
 class Faculty implements Idcard
{
	String id,full_name,dob,dept_name;
	public void set_basicinfo(String Id,String Full_name,String Dob,String Dept_name)
	{
		id=Id;
		full_name=Full_name;
		dob=Dob;
		dept_name=Dept_name;
	}
	public void get_info()
	{	System.out.println("Faculty Id"+" : "+id);
		System.out.println("Name"+" : "+full_name);
		System.out.println("DOB"+" : "+dob);
		System.out.println("Department"+" : "+dept_name);
	}
	
}

	

class ParmanentFaculty extends Faculty
{
	public void status()
	{
		System.out.println("Status"+" : "+"Permanent");
	}

}
class VisitingFaculty extends ParmanentFaculty
{
 public void status(String valid)
	{
		System.out.println("Status"+" : "+"Visiting");
		System.out.println("Validation"+" : "+"valid up to"+valid);

	}
	
}
 class Student implements Idcard
{
	String id,full_name,dob,dept_name;
	public void set_basicinfo(String Id,String Full_name,String Dob,String Dept_name)
	{
		id=Id;
		full_name=Full_name;
		dob=Dob;
		dept_name=Dept_name;
	}
	public void get_info()
	{	System.out.println("Enrollment no."+" : "+id);
		System.out.println("Name"+" : "+full_name);
		System.out.println("DOB"+" : "+dob);
		System.out.println("Department"+" : "+dept_name);
	}
	
}

class ParmanentStudent extends Student
{
	public void status()
	{
		System.out.println("Status"+" : "+"Reguler");
	}

}
class VisitingStudent extends ParmanentStudent
{
 public void status(String valid)
	{
		System.out.println("Status"+" : "+"Visiting");
		System.out.println("Validation"+" : "+valid);

	}
}

class Createid
{
	public static void main(String[] args)
	{
		Faculty i=new Faculty();
		String id,name,dob,dept_name,valid,status;
		Scanner s =new Scanner(System.in);
		System.out.println("enter the  id of:");
		id=s.nextLine();
		System.out.println("enter the name :");
		name=s.nextLine();
		System.out.println("enter the DOB(dd/mm/yy) :");
		dob=s.nextLine();
		System.out.println("enter the department name :");
		dept_name=s.nextLine();
		i.set_basicinfo(id,name,dob,dept_name);
		System.out.println("id card for 1:Faculty 2:student");
		int choice=s.nextInt();
			s.nextLine();
		switch(choice){
			case 1:
		
				System.out.println("enterd the faculty status:");
				 status=s.nextLine();
				switch(status){
					case "permanent":
						ParmanentFaculty p=new ParmanentFaculty();
						i.get_info();
						p.status();
						break;
					case "visiting":
						VisitingFaculty v=new VisitingFaculty();
						System.out.println("enter the validity up to:");
						valid=s.nextLine();
						i.get_info();
						v.status(valid);
						break;
				}
				
				break;
		
		case 2:
				System.out.println("enterd the Student status:");
				 status=s.nextLine();
					switch(status)
					{
					case "permanent":ParmanentStudent p=new ParmanentStudent();
									i.get_info();
									p.status();
									break;
				
				
					case "visiting":VisitingStudent v=new VisitingStudent();
									System.out.println("enter the validity up to:");
									valid=s.nextLine();
									i.get_info();
									v.status(valid);
									break;
					}
					
					break;
			default :
					System.out.println("enter a valid choice:");

		
		
		

	}

}
}






	
	
