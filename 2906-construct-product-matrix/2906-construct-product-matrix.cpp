class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int mod = 12345;

        int size = n * m;
        vector<long long> arr(size);

        // Step 1: Flatten matrix
        int idx = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                arr[idx++] = grid[i][j];
            }
        }

        // Step 2: Prefix
        vector<long long> prefix(size, 1), suffix(size, 1);

        for(int i = 1; i < size; i++) {
            prefix[i] = (prefix[i-1] * arr[i-1]) % mod;
        }

        // Step 3: Suffix
        for(int i = size - 2; i >= 0; i--) {
            suffix[i] = (suffix[i+1] * arr[i+1]) % mod;
        }

        // Step 4: Build result
        vector<vector<int>> result(n, vector<int>(m));
        idx = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                result[i][j] = (prefix[idx] * suffix[idx]) % mod;
                idx++;
            }
        }

        return result;
    }
};