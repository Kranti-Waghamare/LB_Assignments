//write a program to display all the factors of the given numbers

package Assignment_21;

class Logic
{
    public void DisplayFactors(int iNum)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNum / 2); iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Q3_Assignment_21
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.DisplayFactors(12);
    }
}
