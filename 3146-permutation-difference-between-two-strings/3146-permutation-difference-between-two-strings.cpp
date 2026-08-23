class Solution {
public:
    int findPermutationDifference(string s, string t) {
           unordered_map<char, int> mp;

        // s ke characters ki positions store karo
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]] = i;
        }

        int ans = 0;

        // t ke according difference calculate karo
        for(int i = 0; i < t.size(); i++) {
            ans += abs(mp[t[i]] - i);
        }

        return ans;

    }
};