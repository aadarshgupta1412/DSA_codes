int reverse(int x){
    int rev = 0;
    while (x>0){
        rev = 10*rev+(x%10);
        x = x/10;
    }
    return rev;
}

int Solution::isPalindrome(int A) {
    
    if ((A<0) || (A%10 == 0)){
        if (A==0) return 1;
        else return 0;
    }
    else{
        int rev = reverse(A);
        return (rev==A);
    }
}
