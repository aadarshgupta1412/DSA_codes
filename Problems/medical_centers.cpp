// Problem at: https://thejoboverflow.com/problem/181/
// Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    vector<int> arr(n);
    int max_ele = 0;
    int sum=0;
    for (int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
        max_ele = max(max_ele, arr[i]);
    }
    int other = sum-max_ele;
    if (other+1>=max_ele){
        cout<<sum;
    }
    else{
        cout<<2*other+1;
    }
    
    
  return 0;

}
