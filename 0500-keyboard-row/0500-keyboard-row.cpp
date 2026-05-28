class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";
        vector<string>ans;
        for(string word:words){
            string lower="";
            for(char ch:word){
                lower+=tolower(ch);
            }
            bool r1=true,r2=true,r3=true;
            for(char ch :lower){
                if(row1.find(ch)==string::npos){
                    r1=false;
                    break;
                }
            }
            for(char ch:lower){
                if(row2.find(ch)==string::npos){
                    r2=false;
                    break;
                }
            }
            for(char ch :lower){
                if(row3.find(ch)==string::npos){
                    r3=false;
                    break;
                }
            }
            if(r1||r2||r3){
                ans.push_back(word);
            }
            }
            return ans;
        
    }
};