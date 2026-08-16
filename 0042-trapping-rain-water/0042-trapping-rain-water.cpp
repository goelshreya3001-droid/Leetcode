class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0,rightmax=0,maxheight=height[0];
        int index=0,water=0;
        for(int i=0;i<height.size();i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index=i;
            }
        }
            // index i tk nikalnge
            for(int i=0;i<index;i++){
                if(leftmax>height[i]){
                    water+=leftmax-height[i];
                }
                else{
                    leftmax=height[i];
                }
            }
            for(int i=height.size()-1;i>index;i--){
                if(rightmax>height[i]){
                    water+=rightmax-height[i];
                }
                else{
                    rightmax=height[i];
                }
            }
            return water;
        }
};