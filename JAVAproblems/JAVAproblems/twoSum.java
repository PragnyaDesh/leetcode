
/**
 * Write a description of twoSum here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class twoSum {
    public int[] twoSum(int[] nums, int target) {
        int index1 = 0;
        int index2 = 0;
        int n = nums.length;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
                {
                    if(nums[i]+nums[j]==target)
                    {
                        index1 = i;
                        index2 = j;
                        break;
                    }
                }
        }
        int[] final_array = {index1, index2};
        return final_array;
    }
}
