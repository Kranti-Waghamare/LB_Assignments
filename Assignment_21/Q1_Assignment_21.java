//write a program to calculate the  digits of a number.

package Assignment_21;

class Logic
{
    public void ProductOfDigits(int iNum)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNum != 0)
        {
            iDigit = iNum % 10;

            iMult = iMult * iDigit;

            iNum = iNum / 10;
        }

        System.out.println(iMult);
    }
}

class Q1_Assignment_21 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.ProductOfDigits(243);
    }
}
