class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        __int128 sum=0;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());

        for(int i=0;i<k;i++){
            if(mul>0){
            sum+= 1LL*nums[i]*mul;
            mul--;
            }
            else if(mul==0){
                sum+=1LL*nums[i];
            }
            else{
                sum+= 1LL*nums[nums.size()-1]*mul;
                mul--;
            }
        }
        return sum;
    }
};