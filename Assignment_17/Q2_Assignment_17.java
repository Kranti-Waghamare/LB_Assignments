//write a program to check whether a number is a palindrome or not. 

package Assignment_17;

class Logic
{
    void CheckPalindrome(int iNum)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iRev = 0;
        int temp = iNum;

        for(iCnt = 0; iCnt < iNum; iCnt++)
        {
            if(iNum < 0)
            {
                iNum = -iNum;
            }

            while(iNum != 0)
            {
                iDigit = iNum % 10;
                iRev = (iRev * 10) + iDigit;
                iNum = iNum / 10;
            }

            if(iRev == temp)
            {
                System.out.println("It is palindrome");
            }
            else
            {
                System.out.println("It is not palindrome");
            }
        }
    }
}

class Q2_Assignment_17 
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPalindrome(121);
    }
}
