// Problem: https://www.interviewbit.com/problems/count-total-set-bits/

// 2 methods:
// 1) start from msb and for every 1s, count number of smaller no.s that can be formed, and add 2^n*encountered_1s_so_far
// 2) last bit flips every 2nd number, second last flips every 4th number and so on.. count them till the number

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

// Method 2: InterviewBit
// int Solution::solve(int A) {
//    long long  int ans=0;
   
//    int bits=log10(A)/log10(2);
//    //cout<<bits;
//    for(int i=0;i<=bits;i++)
//    {
//        int c=pow(2,i),cnt=0;
//        int set=(A+1)/c;
//        cnt=(set/2)*c;
//        int incomp=(A+1)%c;
//        if(set%2!=0) cnt+=incomp;
       
//        ans+=cnt;
//    }
//     return ans%1000000007;
// }

