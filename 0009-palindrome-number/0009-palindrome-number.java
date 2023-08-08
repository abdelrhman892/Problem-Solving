class Solution {
    public boolean isPalindrome(int x) {
        String str = String.valueOf(x); //to Transformation to String
        String reverse = new StringBuilder(str).reverse().toString(); // to reverse String

        if(str.equals(reverse) == true)
            return true;
        else
            return false;
    }
}