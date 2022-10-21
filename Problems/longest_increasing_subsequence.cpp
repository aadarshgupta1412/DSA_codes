// Problem: https://leetcode.com/problems/longest-increasing-subsequence/
// https://www.interviewbit.com/blog/longest-increasing-subsequence/
// https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/

class Solution {
public:
    
    int find_idx(vector<int> a, int entry){
        int i=0;
        while(i<a.size()){
            if (entry<=a[i])  break; 
            i++;
        }
        return i;
    }
    
    int lengthOfLIS(vector<int> nums){
        vector<int> a;
        for (int i=0; i<nums.size(); i++){
            if (a.size()==0){
                a.push_back(nums[i]);
            }
            else{
                int x = find_idx(a, nums[i]);
                if (x==a.size()) a.push_back(nums[i]);
                else a[x] = nums[i];
            }
        }
        return a.size();
    }
    
};
