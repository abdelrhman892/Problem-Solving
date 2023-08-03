class Solution {
    public int smallestEvenMultiple(int n) {
        int smallestEvenMultiple = n;
       if(smallestEvenMultiple%2 ==0){
           return smallestEvenMultiple;
       }
        return smallestEvenMultiple*2;
    }
}
