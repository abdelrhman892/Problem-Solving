class Solution {
    public int[] getConcatenation(int[] nums) {
        int[] newNum = new int[2 * nums.length];
        int i = 0;
        int c = 0;
        for (; i < nums.length; i++){
            newNum[i] = nums[i];
        }
        for (int x = i; x < nums.length + i; x++){
            newNum[x] = nums[c];
            c++;
        }
        return newNum;
    }
}