class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int votes = 1;
        int maj = nums[0];
        for(int i = 1; i<nums.size();i++){
            if(maj == nums[i]){
                votes++;
            }else{
                votes--;
            }
            if(votes == 0){
                maj = nums[i];
                votes++;
            }
        }
        return maj;
    }
};