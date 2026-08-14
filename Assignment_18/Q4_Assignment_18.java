//write a program to find sum of even and odd digits seperately in a number.

package Assignment_18;

class Logic
{
    void SumEvenOddDigits(int iNo)
    {
        int iSum1 = 0;
        int iSum2 = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            if(iDigit % 2 == 0)
            {
                iSum1 = iSum1 + iDigit;
            }
            else
            {
                iSum2 = iSum2 + iDigit;
            }
        }

        System.out.println(iSum1);
        System.out.println(iSum2);
    }
}

class Q4_Assignment_18 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.SumEvenOddDigits(123456);
    }
}
