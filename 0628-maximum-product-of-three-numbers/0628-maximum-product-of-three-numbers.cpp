class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        // int max1=-1,max2=-1,max3=-1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>=max1){
        //         max3=max2;
        //         max2=max1;
        //         max1=nums[i];
        //     }
        sort(nums.begin(),nums.end());
            // for(int i =n-1;i>=n-3;i--)
           return max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
        
            }
};
            