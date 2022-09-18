// Problem: https://www.interviewbit.com/problems/maximum-sum-triplet/
// Explanation resource: https://www.youtube.com/watch?v=Ttyr_NCLlYs

// Time Complexity: O(n*log(n))

int Solution::solve(vector<int> &A) {
    
    int n = A.size();
    vector<int> B(n);
    for (int i=n-1; i>=0; i--){
        if (i==(n-1)){
            B[i] = A[i];
        }    
        else{
            B[i] = max(B[i+1], A[i]);
        }
    }
    set<int> s;
    int ans = 0;
    s.insert(A[0]);
    for (int i=1; i<n; i++){
        s.insert(A[i]);
        auto it = s.find(A[i]);
        if (it!=s.begin() && B[i]!=A[i]){
            ans = max(ans, (*--it)+A[i]+B[i]);    
        }
    }
    return ans;
}
