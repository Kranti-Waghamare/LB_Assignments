//write a program to find the sum of all even numbers upto N.

package Assignment_20;

class Logic
{
    public void SumEvenNumbers(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        System.out.println("Summation is : " + iSum);
    }
}

class Q1_Assignment_20 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.SumEvenNumbers(10);
    }
}
