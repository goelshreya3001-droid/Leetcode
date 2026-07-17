class Solution {
public:
    bool hasAlternatingBits(int n) {
        string binary = "";

        while (n > 0) {
            int rem = n % 2;
            binary += to_string(rem);
            n /= 2;
        }

        // reverse(binary.begin(), binary.end());

        for (int i = 0; i < binary.length() - 1; i++) {
            if (binary[i] == binary[i + 1]) {
                return false;
            }
        }

        return true;
    }
};