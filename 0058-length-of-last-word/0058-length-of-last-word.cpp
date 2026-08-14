class Solution {
public:
    int lengthOfLastWord(string s) {
        string last ="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ' && last.length()>0){
                break;
            }
         if(s[i]!= ' '){
                last=s[i]+last;
            }

        }
            return last.length();
        
    }
};