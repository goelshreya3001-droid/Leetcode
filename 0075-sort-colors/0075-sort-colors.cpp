class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int gap=n/2;gap>=1;gap=gap/2){
            for(int j=gap;j<n;j++){
                int temp=nums[j];
                int i;
                for( i=j-gap;i>=0 && nums[i]>temp;i=i-gap){
                    nums[i+gap]=nums[i];

                }
                nums[i+gap]=temp;
            }
        }
    }
};