class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n =nums.size();
        vector<int>prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int totalsum=prefix[n-1];
        // middle index
        for(int i=0;i<n;i++){
            int lsum=(i==0)?0:prefix[i-1];
            int rsum=totalsum-prefix[i];
            if(lsum==rsum){
                return i;
            }
        }
        return -1;
    }
};