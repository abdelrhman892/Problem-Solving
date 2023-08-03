class Solution {
    public int smallestEvenMultiple(int n) {
        int smallestEvenMultiple = n;
        while(smallestEvenMultiple!=0){
        if(smallestEvenMultiple %2 == 0 && smallestEvenMultiple%n == 0){
            return smallestEvenMultiple;
        }
            smallestEvenMultiple++;
        }
         return 0;
       
    }
}
