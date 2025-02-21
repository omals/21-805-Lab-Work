//Program to print alternate prime numbers.
import java.util.*;
public class Prime
{
	public static void main(String args[])
	{
		Scanner kb = new Scanner(System.in);
		System.out.println(" ALTERNATE PRIME NUMBERS");
		System.out.println(" Enter the upper limit : ");
		int limit = kb.nextInt();
		int n=0;
		int count = 0;
		String set = "True";
		while (n<=limit)
		{
		 for(int i=1;i<=limit;i++)
		  {	
		      if (n%i == 0)
		      {
		      	count = count+1;
		      }
		   }
		  if (count <=2)
		  {
		  	if(set == "True")
		  	{
		  		System.out.println(" "+n);
		  		set = "False";
		  	}
		  	else
		  	        set = "True";
		  
		  		
		  }
		  n = n+1;
		  count = 0;
		}
		System.out.println();
 	}
 }
		
