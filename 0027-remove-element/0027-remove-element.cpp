class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count =0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
            else
            count++;
        }
        for(int i=nums.size()-count;i<nums.size();i++){
            nums[i]=0;
        }
        return nums.size()-count;

    }
    
};