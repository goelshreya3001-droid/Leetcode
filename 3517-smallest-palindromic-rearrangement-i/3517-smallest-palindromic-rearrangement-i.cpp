class Solution {
public:
    string smallestPalindrome(string s) {
        int len=s.length();
        // int mid=len/2;
        // // half ko sort krna hh 
        // sort(s.begin(),s.begin()+mid);
        // // now right mirror image update 
        // for(int i=0;i<mid;i++){
        //     s[len-1-i]=s[i];
        // }
        // return s;
        int freq[26]={0};
        for(int i=0;i<len;i++){
            freq[s[i]-'a']++;
        }
       string left="";
       string middle="";
       for(int i=0;i<26;i++){
         left.append(freq[i]/2,char(i+'a'));
       
       if(freq[i]%2==1){
        middle=char(i+'a');
       }
       }
       string right=left;
       reverse(right.begin(),right.end());

            
     return left+middle+right;
        }
    
};