class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0;
        int e=nums.size()-1;
        while(st<=e){
            int mid=st+(e-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                st=mid+1;
            }
            else {
                e=mid-1;
            }
        }
            return st;
        
    }
};