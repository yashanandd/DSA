class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int i = 1;
        while(i<nums.size()){
            if(nums[k]!=nums[i]){
                k++;
                nums[k]=nums[i];
            }else{
                i++;
            }
        }
        return k+1;
    }
};