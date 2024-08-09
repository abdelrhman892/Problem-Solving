class Solution {
    public int findNonMinOrMax(int[] nums) {
        int target = 0;
        if (nums.length <= 2){
            return -1;
        }
        else{
            int max = nums[0];
            int min = nums[0];
            for (int i = 1; i < nums.length; i++) {
                if (nums[i] < min) {
                    min = nums[i];
                }
                if (nums[i] > max) {
                    max = nums[i];
                }
            }
            for (int x = 0; x < nums.length; x++) {
                if (nums[x] != min && nums[x] != max) {
                    target = nums[x];
                    break;
                }
            }
        }
        return target;
    }
}