import java.util.Scanner;
class program28
{
    public static void main(String [] args)
    {   Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMark = 0.0f;   

        scanner = new Scanner(System.in);

        System.out.println("Enter your name : ");
         
        sName = scanner.next(); //Exception
        System.out.println("Enter your age : ");
        iAge = scanner.nextInt();
         


        System.out.println("Enter your Marks : ");
        fMark = scanner.nextFloat();

        System.out.println("Welcome "+sName);
        System.out.println("your age is : "+iAge);
        System.out.println("Your marks is : "+fMark);

        

    }
    
}




