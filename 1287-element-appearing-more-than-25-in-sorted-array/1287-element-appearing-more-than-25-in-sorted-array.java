class Solution {
    public int findSpecialInteger(int[] arr) {
        int bigCount = 0;
        int bigNum = 0;
        if (arr.length == 1){
            bigNum = arr[0];
        }
        else {
            for (int i = 0; i < arr.length; i++){
                int count = 0;
                for (int j = i+1; j < arr.length; j++){
                    if (arr[i] == arr[j]){
                        count++;
                        if (count > bigCount){
                            bigNum = arr[i];
                            bigCount = count;
                        }
                    }
                }
            }
        }
        return bigNum;
    }
}