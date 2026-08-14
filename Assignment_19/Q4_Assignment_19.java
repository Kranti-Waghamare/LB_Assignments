//write a program to print each digit of a number seperatly.

package Assignment_19;

class Logic
{
    public void PrintDigits(int iNum)
    {
        int iDigit = 0;

        while(iNum != 0)
        {
            iDigit = iNum % 10;

            System.out.println(iDigit);

            iNum = iNum / 10;
        }
    }
}

class Q4_Assignment_19 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.PrintDigits(9876);
    }
}
