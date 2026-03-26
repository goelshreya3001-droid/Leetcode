class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";
        string first=strs[0];
        string prefix="";
        for(int i=0;i<first.length();i++){
            unordered_map<char,int>mp;
            char ch =first[i];
            mp[ch]=1;
            bool flag=false;
            for(int j=1;j<strs.size();j++){
                 if (i >= strs[j].length() || strs[j][i] != ch) {
                flag = true;
                break;
            }
            mp[ch]++; // matched → increase count
        }
        if(flag ||mp[ch]!=strs.size())
          break;
            prefix+=ch;
        }
        return prefix;
    }
};