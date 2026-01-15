class Solution {
    public int firstUniqChar(String s) {     // this is a brute-force solution 
        for(int i=0; i<s.length();i++){
            boolean flag = false;
            for(int j=0; j<s.length();j++){
                if(i!=j && s.charAt(i)==s.charAt(j)){
                    flag = true;
                    break;
                }
            }
            if(flag==false)return i;
        }
        return -1;
    }
}

//time complexiyu= O(n)
//we trave 2 time to check the occurence of the elemnts 
