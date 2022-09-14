#include <iostream>
using namespace std;

unsigned long int binomial_coef(unsigned int n, unsigned int r){
    if (r>(n-r)){
        r = n-r;
    }
    unsigned long int num = 1;
    for (int i=0; i<r; i++){
        num*=(n-i);
        num/=(i+1);
    }
    return num;
}

unsigned long int catalan_binomial(unsigned int n){
    unsigned long int x = binomial_coef(2*n, n);
    return x/(n+1);
}

int main() {

    unsigned int n;
    cout<<"n = ";
    cin >> n;
    unsigned long int output = catalan_binomial(n);
    printf("Catalan (%d) = %d", n, output);

    return 0;
}
