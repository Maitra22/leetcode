class Solution {
public:
    bool isPalindrome(int x)
    {
        long num=x;
        long rev=0;
        if(x<0) return false;

        while(x!=0)
        {
            int d=x%10; //this will extract the last digit(decimal)
            rev=rev*10+d;
            x=x/10;//
        } 

        if(rev==num)
        {
            return true;
        }

        else
        {
            return false;
        }

    }
};