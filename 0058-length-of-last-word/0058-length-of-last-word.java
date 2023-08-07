class Solution {
    public int lengthOfLastWord(String s) {
        String str = s;
        String[] arrOfStr = str.split(" ");
          //  for(int i = 0; i < arrOfStr.Length(); i++){
           //     String s = arrOfStr[i]
            //}
        
        return arrOfStr[arrOfStr.length-1].length();
        
    }
}