// Problem: https://www.interviewbit.com/problems/count-total-set-bits/

int Solution::solve(int A) {
    
    if (A==1){
        return 1;
    }
    long long int modi = 1e9+7;
    vector<int> num;
    while(A){
        num.push_back(A%2);
        A/=2;
    }
    //reverse(num.begin(). num.end());
    int size = num.size()-1;
    long long int count=0;
    int en = 0;  //Number of 1s encountered so far
    for (int i=num.size()-1; i>=0; i--){
        if (num[i]==1){
            count+=(size*pow(2, size-1) +1)+(en*pow(2, size));
            en++;
        }
        size--;
    }
    return count%modi;
}
