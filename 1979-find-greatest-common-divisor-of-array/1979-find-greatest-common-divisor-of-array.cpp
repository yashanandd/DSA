class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min_elem = INT_MAX;
        int max_elem = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<min_elem) min_elem = nums[i];
            if(nums[i]>max_elem) max_elem = nums[i];
        }
        return gcd(min_elem, max_elem);
    }
};