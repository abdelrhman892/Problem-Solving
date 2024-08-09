class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int missing = 0;
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if (nums[j] < nums[i]){
                    int min = nums[j];
                    int temp = nums[i];
                    nums[i] = min;
                    nums[j] = temp;
                }
            }
        }
        if (nums[n-1] != n){
            missing = n;
        }
        else{
            for(int i = 0; i < n - 1; i++){
                if(nums[i] + 1 != nums[i + 1]){
                    missing =  nums[i + 1] - 1;
                }
            }
        }
        return missing;
    }
}