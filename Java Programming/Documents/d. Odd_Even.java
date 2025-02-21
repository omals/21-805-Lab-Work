import java.util.*;
public class Odd_Even
{ 
    public static void main(String[] args) 
    {
        Scanner kb =new Scanner(System.in);
        System.out.print("Enter the number : ");
        int number = kb.nextInt();
        if(number%2 == 0)
        { System.out.println("Even"); }
        else
        { System.out.println("Odd"); }
    }
}
