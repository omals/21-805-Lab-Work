import java.util.*;
public class Student {
	private int roll_No;
	private String name;
	private float mark_1;
	private float mark_2;
	private float mark_3;
	private float total_Mark;
	
	Student(){
		this.roll_No=0;
		this.mark_2 = 0;
		this.mark_2 = 0;
		this.mark_3 = 0;
		this.name =" ";
		this.total_Mark=0;
	}

    public void display() {
    		System.out.print("   "+this.roll_No+"         "+this.name+"       "+this.mark_1+"          "+this.mark_2+"        "+this.mark_3+"         ");
    		calculate();
    		
    	}    
    
    public void input() {
    	Scanner kb = new Scanner(System.in);
    	System.out.print("Roll Number : ");
    	this.roll_No = kb.nextInt();
    	System.out.print("Name        : ");
    	this.name = kb.next();
    	System.out.println("mark of Subjects out of 100");
    	System.out.print("Subject 1   : ");
    	this.mark_1 = kb.nextFloat();
    	System.out.print("Subject 2   : ");
    	this.mark_2 = kb.nextFloat();
    	System.out.print("Subject 3   : ");
    	this.mark_3 = kb.nextFloat();
    }   
	
    void calculate() {
    	if(mark_1 < 50 || mark_2 <50 || mark_3 <50)
    	{
    		total_Mark = 0;
    	}
    	else
    		total_Mark = mark_1 + mark_2 + mark_3;
    	System.out.println(total_Mark);
    }
    
    public static void main(String args[]) {
    	Scanner kb = new Scanner (System.in);
    	System.out.print(" Enter the Number of Students Details to be stored : ");
    	int number = kb.nextInt();
    	Student[] S = new Student[number];
    	System.out.println("Start entering the Details of the Student");
    	for (int i=0;i<number;i++) {
    		    S[i] = new Student();
    	        S[i].input();
    	
    	}
    	System.out.println("                              STUDENTS DETAILS");
    	System.out.println("Roll Number    Name    Subject-1    Subject-2    Subject-3    Total Marks");
    	for (int i=0;i<number;i++) {
	        S[i].display();
	
	}
    }
}
