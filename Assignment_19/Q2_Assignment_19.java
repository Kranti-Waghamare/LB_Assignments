//write a program to display the grade of a student based on marks.

package Assignment_19;

class Logic
{
    void DisplayGrades(int Marks)
    {
        if(Marks < 35)
        {
            System.out.println("Grade D");
        }
        else if((Marks >= 35) && (Marks <= 75))
        {
            System.out.println("Grade C");
        }
        else if((Marks >= 76) && (Marks <= 85))
        {
            System.out.println("Grade B");
        }
        else if((Marks >= 86) && (Marks <= 100))
        {
            System.out.println("Grade A");
        }
    }
}

class Q2_Assignment_19
{
    public static void main(String A[])
    {
        Logic obj = new Logic();

        obj.DisplayGrades(82);
    }
}
