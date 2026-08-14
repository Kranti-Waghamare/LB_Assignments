//write a program to check wheather a number is prime or not.

package Assignment_18;

class Logic
{
    void CheckPrime(int iNo)
    {
        int iCnt = 0;
        boolean bFlag = false;

        for(iCnt = 2; iCnt < iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                bFlag = false;
                break;
            }
        }

        if(bFlag == true)
        {
            System.out.println("It is not a prime");
        }
        else
        {
            System.out.println("It is prime");
        }
        
    }
}

class Q1_Assignment_18 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CheckPrime(11);
    }
}
