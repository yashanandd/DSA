class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i = nums[0];
        int j = 0;

        for (int k = 1; k < nums.size(); k++) {
            if (nums[k] >= i) {
                j = i;
                i = nums[k];
            } else if (nums[k] > j) {
                j = nums[k];
            }
        }

        return (i - 1) * (j - 1);
    }
};