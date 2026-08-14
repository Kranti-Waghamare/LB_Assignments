//write a program to print all the numbers from 1 to N that are divisible by both 2 and 3.

package Assignment_21;

class Logic
{
    public void PrintDivisibleBy2And3(int iNum)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNum); iCnt++)
        {
            if((iCnt % 2 == 0) && (iCnt % 3 == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Q5_Assignment_21
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.PrintDivisibleBy2And3(30);
    }
}
