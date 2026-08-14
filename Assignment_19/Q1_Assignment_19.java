//write a program to check whether given year is leap year or not.

package Assignment_19;

class Logic
{
    void CheckLeapYear(int year)
    {
        if((year / 4 == 0) || (year / 8 == 0))
        {
            System.out.println("It is leap year");
        }
        else
        {
            System.out.println("It is not a leap year");
        }
    }
}

class Q1_Assignment_19 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckLeapYear(2026);
    }
}
