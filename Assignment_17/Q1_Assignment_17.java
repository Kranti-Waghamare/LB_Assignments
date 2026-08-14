//write a program to find sum of Digits of a number.

package Assignment_17;

class Logic
{
    void SumOfDigits(int iNum)
    {
        int iCnt = 0;
        int iSum = 0;
        int iDigit = 0;

        for(iCnt = 0; iCnt < iNum; iCnt++)
        {
            if(iNum < 0)
            {
                iNum = -iNum;
            }

            while(iNum != 0)
            {
                iDigit = iNum % 10;
                iSum = iSum + iDigit;
                iNum = iNum / 10;
            }

            System.out.println(iSum);
        }
    }
}

class Q1_Assignment_17 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumOfDigits(1554);
    }
}
