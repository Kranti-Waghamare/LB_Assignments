//write a program to check wheather number is divisible by 5 and 11 or not.

package Assignment_19;

class Logic
{
    public void CheckDivisible(int iNo)
    {
        if((iNo % 5 == 0) && (iNo % 11 == 0))
        {
            System.out.println("Number is divisible by 5 and 11");
        }
        else
        {
            System.out.println("Number is not divisible by 5 and 11");
        }
    }
}

class Q3_Assignment_19 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CheckDivisible(55);
    }
}
