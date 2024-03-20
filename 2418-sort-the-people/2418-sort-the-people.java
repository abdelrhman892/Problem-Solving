class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        for (int i = 0; i < heights.length; i++){
            for (int j = 1 + i; j < heights.length; j++){
                if (heights[j] > heights[i]){
                    int temp = heights[i];
                    String temp1 = names[i];
                    heights[i] = heights[j];
                    names[i] = names[j];
                    heights[j] = temp;
                    names[j] = temp1;
                }
            }
        }
        return names;
    }
}