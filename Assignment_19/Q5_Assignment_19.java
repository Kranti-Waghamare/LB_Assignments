//write a program to calculate the power of a number of using loops.

package Assignment_19;

class Logic
{
    public void CalculatePower(int base, int exp)
    {
        int iCnt = 0;
        int iPower = 1;

        for(iCnt = 1; iCnt <= exp; iCnt++)
        {
            iPower = iPower * base;
        }

        System.out.println("Power is : " + iPower);   
    }
}

class Q5_Assignment_19 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CalculatePower(2, 5);
    }
}
