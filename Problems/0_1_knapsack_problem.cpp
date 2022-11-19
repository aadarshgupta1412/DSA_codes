// Problem: https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/ticky_on_article
// Solution resources: 
// https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
// https://www.interviewbit.com/blog/0-1-knapsack-problem/


class Solution{
    public:
    
    int knap(int N, int W, int w[], int v[], vector<vector<int>> &dp){
        if (N<0) return 0;
        if (dp[N][W]!=-1) return dp[N][W];
        if (w[N]<=W){
            dp[N][W] = max(v[N]+knap(N-1, W-w[N], w, v, dp), knap(N-1, W, w, v, dp));
            return dp[N][W];
        }
        else{
            dp[N][W] = knap(N-1, W, w, v, dp);
            return dp[N][W];
        }
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> dp(n+1, vector<int>(W+1, -1));
       return knap(n-1, W, wt, val, dp);
    }
};
