//write a program to find the largest digit in a given number.
package Assignment_20;

class Logic
{
    public void FindLargestDigit(int iNum)
    {
        int iDigit = 0;
        int iLarge = 0;

        while(iNum != 0)
        {
            iDigit = iNum % 10;

            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
        
            iNum = iNum / 10;
        }
        System.out.println(iLarge);
    }
}

class Q4_Assignment_20
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.FindLargestDigit(83828);
    }
}
