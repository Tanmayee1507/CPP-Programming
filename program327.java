//sir program328
//Approach 1
import java.util.*;

class program327
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        int iMult = 1;
        for(int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iMult = iMult * iCnt;

        }

        System.out.println("Factorial is:"+iMult); //+ for concatenation
        
    }
    
}

