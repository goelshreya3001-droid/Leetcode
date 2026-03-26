class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";
        string first=strs[0];
        string prefix="";
        for(int i=0;i<first.length();i++){
           char ch=first[i];
           for(int j=1;j<strs.size();j++){
            if (i >= strs[j].length() || strs[j][i] != ch) {
                    return prefix;  
                }
           }
                prefix+=ch;
            }
        
            return prefix;
           }
    };