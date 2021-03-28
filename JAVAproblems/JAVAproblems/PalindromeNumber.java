
/**
 * Write a description of PalindromeNumber here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class PalindromeNumber {
    public boolean isPalindrome(int x) {
        if(x<0)
            return false;
        int newx = x;
        int rev = 0;
        while(newx>0) {
            int temp = newx%10;
            rev = rev*10 + temp;
            newx = newx/10;
        }
        
        if(rev == x)
            return true;
        return false;
    }
}
