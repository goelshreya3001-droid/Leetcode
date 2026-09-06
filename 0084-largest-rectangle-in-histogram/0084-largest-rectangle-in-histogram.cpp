class Solution {
public:
    int largestRectangleArea(vector<int>&arr) {

        // code here
        // next smallest right
        // next smallest left 
        int n=arr.size();
        vector<int>right(n);
        stack<int>s;
        for(int i=0;i<arr.size();i++){
            while(!s.empty()&&arr[s.top()]>arr[i]){
                right[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            right[s.top()]=n;
            s.pop();
        }
    // next smallest left
    vector<int>left(n);
    for(int i=arr.size()-1;i>=0;i--){
        while(!s.empty()&& arr[s.top()]>arr[i]){
            left[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        left[s.top()]=-1;
        s.pop();
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,arr[i]*(right[i]-left[i]-1));
    }
    return ans;
    }
};

  