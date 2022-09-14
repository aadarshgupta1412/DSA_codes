#include <iostream>
using namespace std;

unsigned long int catalanDP(unsigned int n){
    unsigned long int catalan[n+1];
    catalan[0] = catalan[1] = 1;
    for (int i=2; i<=n; i++){
        catalan[i] = 0;
        for (int j=0; j<i; j++){
            catalan[i]+=(catalan[j]*catalan[i-1-j]);
        }
    }
    return catalan[n];
}

int main() {

    unsigned int n;
    cout<<"n = ";
    cin >> n;
    unsigned long int output = catalanDP(n);
    printf("Catalan (%d) = %d", n, output);

    return 0;
}
