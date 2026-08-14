//write a program to count how many even and odd numbers are present beetween 1 and N.

package Assignment_21;

class Logic
{
    public void CountEvenOddRange(int iNum)
    {
        int iCnt = 0;
        int iCount1 = 0;
        int iCount2 = 0;

        for(iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCount1++;
            }
            else if(iCnt % 2 != 0)
            {
                iCount2++;
            }
        }
        System.out.println(iCount1);
        System.out.println(iCount2);
    }
}

class Q2_Assignment_21 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CountEvenOddRange(50);
    }
}
