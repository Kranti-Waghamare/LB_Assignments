//write a program to check wheather number is positive, negative or zero.

package Assignment_18;

class Logic
{
    void CheckSign(int iNo)
    {
        if(iNo > 0)
        {
            System.out.println("Number is positive");
        }
        else if(iNo < 0)
        {
            System.out.println("Number is Negative");
        }
        else if(iNo == 0)
        {
            System.out.println("Number is Zero");
        }
    }
}

class Q5_Assignment_18 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CheckSign(-8);
    }
}
