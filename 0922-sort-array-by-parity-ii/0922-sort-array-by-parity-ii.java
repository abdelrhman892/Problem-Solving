class Solution {
    public int[] sortArrayByParityII(int[] nums) {
        int counteven = 0; //3
        int countodd = 0; //3
        int o = 0;
        int g = 0;
        for (int i = 0; i < nums.length; i++){
            if (nums[i] % 2 == 0){
                counteven++;
            }
            else {
                countodd++;
            }
        }
        int[] evenArr = new int[counteven];
        int[] oddArr = new int[countodd];

        for (int i = 0; i < nums.length; i++){
            if (nums[i] % 2 == 0){
                evenArr[g] = nums[i];
                g++;
            }
            else {
                oddArr[o] = nums[i];
                o++;
            }
        }
        int e1 = 0;
        int o1 = 0;
        for (int i = 0; i < nums.length; i++){
            if (i % 2 == 0){
                nums[i] = evenArr[e1];
                e1++;
            }
            else {
                nums[i] = oddArr[o1];
                o1++;
            }
        }
        return nums;
    }
}