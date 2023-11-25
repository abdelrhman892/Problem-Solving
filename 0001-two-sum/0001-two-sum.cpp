class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int numsSize = nums.size();
        int numNeed;
        vector<int> output;
        
        
        for (int i = 0; i < numsSize-1; i++)
        {
            for (int j = i+1 ; j < numsSize ; ++j) {          
                numNeed = nums[i] + nums[j];
                if (target == numNeed){
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
        }
        return output;
    }
};