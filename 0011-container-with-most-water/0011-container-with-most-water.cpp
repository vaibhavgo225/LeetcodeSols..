class Solution {
public:
    int maxArea(vector<int>& height) {
       int right=height.size()-1;
       int left=0;
       int maximum=0,ans;
       
       while(left<right){
        int width=right-left;
        ans=min(height[right],height[left])*(width);
        maximum= max(maximum,ans);
        width--;
        if(height[right]>height[left])
        left++;
        else
        right--;
       }
       return maximum;
    }
    
};