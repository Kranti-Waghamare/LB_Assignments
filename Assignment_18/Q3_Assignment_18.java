//write a program to print all odd numbers upto N.

package Assignment_18;

class Logic
{
    void PrintOddNumbers(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Q3_Assignment_18 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.PrintOddNumbers(20);
    }
}
