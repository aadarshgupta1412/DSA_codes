// Problem: https://leetcode.com/problems/longest-increasing-subsequence/
// https://www.interviewbit.com/blog/longest-increasing-subsequence/
// https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/

// Time Complexity: O(n^2)
class Solution1 {
public:
    
    int lis(vector<int> nums){
        int n = nums.size();
        vector<int> lis(n);
        lis[0] = 1;
        for (int i=1; i<n; i++){
            lis[i] = 1;
            for (int j=0; j<i; j++){
                if (nums[i]>nums[j] && lis[i]<lis[j]+1){
                    lis[i]=lis[j]+1;
                }
            } 
        }
        return *max_element(lis.begin(), lis.end());
    }
    
    int lengthOfLIS(vector<int> nums){
        int x = lis(nums);
        return x;
    }
    
};


// Time Complexity: O(n*log(n))
class Solution2 {
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
