import java.util.*;
import java.lang.Math;
public class Main
{
    public static void main(String[] args) 
    {
        Scanner kb =new Scanner(System.in);
        System.out.print("Enter the number : ");
        String str= kb.nextLine(); 
        int number=Integer.parseInt(str);  
        int reverse=0,reminder,temp=number,counte=0,countb=0;
        int np=str.length();
        System.out.println("length : "+np);
        int p=np-1;
        int power=(int)Math.pow(10,p);
        while(np!=0 & number != 0)
        {   
            if(number/power==0)
            {   
                power=power-1;
                countb=countb+1;
            }
            if(number%10==0)
            {   
                number=number/10;
                counte=counte+1;
            }
            np=np-1;
            p=p-1;
            power=(int)Math.pow(10,p);
        }
        number=temp;
        while(number != 0)
        {  
            reminder = number%10;
            reverse = reverse*10+reminder;
            number = number/10;
        }
        System.out.print("Reverse = ");
        if(counte!=0)
        {   
            for(int i=0;i<counte;i++)
            {
                System.out.print("0");
            }
        }
        System.out.print(reverse);
        power=(int)Math.pow(10,counte);
        if(temp%power==0)
        {
            countb=countb-counte;
        }
        if(countb!=0)
        {   
            for(int i=0;i<countb;i++)
            {
                System.out.print("0");
            }
        }
        System.out.println();
    }
}
