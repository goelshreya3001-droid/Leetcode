class Solution {
public:
        void rotate(vector<vector<int>>& mat){
            int n=mat.size();
              for(int r=0;r<n-1;r++){
            for(int c=r+1;c<n;c++){
                swap( mat[r][c],mat[c][r]);
            }
        }
          for(int r=0;r<n;r++){
            reverse(mat[r].begin(),mat[r].end());
        }
    }
      bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target){
        for(int k=1;k<=4;k++){
            if(mat==target){
                return true;
            }
            rotate(mat);
            }
             return false;
        }
};