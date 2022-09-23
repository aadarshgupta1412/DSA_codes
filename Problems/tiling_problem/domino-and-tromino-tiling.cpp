#include <iostream>
#include <vector>
using namespace std;

int solve(int n, vector<int>dp){
        //base case
        int mod=1e9+7;
        if(n==1)return 1;
        if(n==2)return 2;
        if(n==3)return 5;
        //check the cache
        if(dp[n]!=-1)
            return dp[n];
        return 
            dp[n]=((2*solve(n-1,dp))%mod + solve(n-3,dp)%mod)%mod;
}

int numTilings(int n) {
        vector<int>dp(n+10,-1);
        return solve(n,dp);
}

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;
    int x=numTilings(n);
    cout<<"Number of ways of tiling: "<<x;

}
