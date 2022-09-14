#include <iostream>
using namespace std;

unsigned long int catalan(int n){
    if (n<=1){
        return 1;
    }
    unsigned long int num = 0;
    for (int i=0; i<n; i++){
        num+=(catalan(i)*catalan(n-1-i));
    }
    return num;
    
    
}

int main() {

    int n;
    cout<<"n = ";
    cin >> n;
    int output = catalan(n);
    printf("Catalan (%d) = %d", n, output);

    return 0;
}
