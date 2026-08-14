//write a program to find the maximum of three numbers.

package Assignment_17;

class Logic
{
    void FindMax(int a, int b, int c)
    {
        if((a > b) & (a > c))
        {
            System.out.println(a);
        }
        else if((b > a) & (b > c))
        {
            System.out.println(b);
        }
        else
        {
            System.out.println(c);
        }
        
    }
}

class Q4_Assignment_17 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.FindMax(3, 7, 2);
    }
}
