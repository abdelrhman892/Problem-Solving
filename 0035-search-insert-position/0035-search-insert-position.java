class Solution {
    public int searchInsert(int[] nums, int target) {

    // left =0                  mid=3                     right=6
        //  1      2      4       8       10        12        16

        //mid = left + right /2 
      
    //   //   if(nums[mid]  <  target )  {  

            // we dont need the first half  left start after mid means left = mid +1
            // else, we now dont need the last half right = mid -1
            

              int left = 0;
              int right = nums.length - 1;
  while (left <= right) {
            int mid =left + (right - left) / 2;  //  3
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
        
    }
}