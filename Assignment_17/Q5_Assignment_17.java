//write a program to print the multiplication table of a number

package Assignment_17;

class Logic
{
    void PrintTable(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iNo * iCnt);
        }
    }
}

class Q5_Assignment_17 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintTable(5);
    }
}
