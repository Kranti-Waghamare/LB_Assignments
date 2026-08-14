//write a program to print numbers from N down to 1 reverse order

package Assignment_20;

class Logic
{
    public void PrintReverse(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt >= 0; iCnt--)
        {
            System.out.println(iCnt);
        }

    }
}

class Q2_Assignment_20
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.PrintReverse(10);
    }
}
