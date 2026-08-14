//write a program to find the Smallest digit in a given number.
package Assignment_20;

class Logic
{
    public void FindSmallestDigit(int iNum)
    {
        int iDigit = 0;
        int iSmall = 9;

        while(iNum != 0)
        {
            iDigit = iNum % 10;

            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
        
            iNum = iNum / 10;
        }
        System.out.println(iSmall);
    }
}

class Q5_Assignment_20
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.FindSmallestDigit(45872);
    }
}
