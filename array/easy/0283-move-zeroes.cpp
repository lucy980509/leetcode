class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int write = 0;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                nums[write] = nums[i];
                if (write != i){
                    nums[i] = 0;
                }
                write++;
            }
        }
    }
};
