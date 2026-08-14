//write a program to Count total number of factors of the given number.

package Assignment_21;

class Logic
{
    public void CountFactors(int iNum)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 1; iCnt <= (iNum / 2); iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                iCount++;
            }
        }

        System.out.println(iCount);
    }
}

class Q4_Assignment_21
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CountFactors(12);
    }
}
