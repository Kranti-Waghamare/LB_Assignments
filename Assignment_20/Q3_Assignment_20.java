//write a program to check wheather number is perfect or not
package Assignment_20;

class Logic
{
    public void CheckPerfect(int iNum)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNum / 2); iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        System.out.println(iSum);
    }
}

class Q3_Assignment_20
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CheckPerfect(12);
    }
}
