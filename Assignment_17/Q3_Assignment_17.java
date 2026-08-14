//write a program to find the maximum of two numbers.

package Assignment_17;

class Logic
{
    void FindMax(int a, int b)
    {
        if(a > b)
        {
            System.out.println(a);
        }
        else
        {
            System.out.println(b);
        }
        
    }
}

class Q3_Assignment_17 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.FindMax(20, 15);
    }
}
