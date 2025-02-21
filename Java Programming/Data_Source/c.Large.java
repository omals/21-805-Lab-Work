//Program to find the 3rd largest number in the given set of numbers

import java.util.*;
public class Large
{
	public static void main(String srgs[])
	{
		Scanner kb = new Scanner(System.in);
		System.out.println(" LARGEST NUMBER IN THE ARRAY");
		System.out.println(" Enter the number of elements in the array : ");
		int n = kb.nextInt();
		int array[];
		array = new int[n];
		System.out.println(" Enter the number in the array : ");
		for(int i=0;i<n;i++)
		{
			array[i] = kb.nextInt();
		}
		n=n-1;
		
		for (int i = 0 ; i < n; i++)
 		{
  			for (int j = 0 ; j < n - i ; j++)
  			{
   				if (array[j] > array[j+1])
   				{
    					int temp = array[j+1];
    					array[j+1] = array[j];
    					array[j] = temp;	
   				}
  			}
  		}
  		n=n+1;
  		System.out.println(array[n-3]);
  		}
  		}
