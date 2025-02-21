import java.util.*;
public class sum_userinput
{
    public static void main(String[] args) 
    {
        Scanner kb =new Scanner(System.in);
        System.out.print("Enter the operand 1 : ");
        int operand1 = kb.nextInt();
        System.out.print("Enter the operand 2 : ");
        int operand2 = kb.nextInt();
        int sum;
        sum = operand1 + operand2;
        System.out.println("Sum = "+sum); 
    }
}
