
/**
 * Write a description of ReverseInteger here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class ReverseInteger {
    public int reverse(int x) {

         int temp=0, ans=0;
         while(x!=0){
            temp = x%10;
             
             if (ans > Integer.MAX_VALUE/10 || (ans == Integer.MAX_VALUE / 10 && temp > 7)) return 0;
            if (ans < Integer.MIN_VALUE/10 || (ans == Integer.MIN_VALUE / 10 && temp < -8)) return 0;
             
            ans = ans*(10) + temp;
            x=x/10;
         
        /*if(x<0)
            ans = ans*(-1);
        return ans;*/
       }
        return ans;
    }
}
