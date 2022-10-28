// Problem: https://leetcode.com/problems/maximum-difference-between-increasing-elements/

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> maxR(n);
        int max_ele = nums[n-1];
        for (int i=n-1; i>=0; i--){
            maxR[i] = max(max_ele, nums[i]);
            max_ele = maxR[i];
        }
        int ans = -1;
        for (int i=0; i<n; i++){
            if (maxR[i]>nums[i]){
                ans = max(ans, maxR[i]-nums[i]);
            }
        }
        return ans;
    }
};
