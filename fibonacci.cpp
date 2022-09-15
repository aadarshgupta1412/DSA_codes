#include <iostream>
using namespace std;

void multiply_matrix(int F[2][2], int M[2][2]){
    int a, b, c, d;
    a = F[0][0]*M[0][0] + F[0][1]*M[1][0];
    b = F[0][0]*M[0][1] + F[0][1]*M[1][1];
    c = F[1][0]*M[0][0] + F[1][1]*M[1][0];
    d = F[1][0]*M[0][1] + F[1][1]*M[1][1];
    F[0][0] = a;
    F[0][1] = b;
    F[1][0] = c;
    F[1][1] = d;
}

void matrix_power(int F[2][2], int n){
    int M[2][2] = {{1, 1}, {1, 0}};
    for (int i=1; i<n; i++){
        multiply_matrix(F, M);
    }
}


// Time Complexity: O(a^n) {exponential where a = (1+sqrt(5))/2}
int fibonacci_recursive(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
}

// Time Complexity: O(n)
int fibonacci_dynamic(int n){
    int fib[n+1];
    fib[0] = 0; 
    fib[1] = 1;
    for (int i=2; i<=n; i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    return fib[n];
}

// Time Complexity: O(n)
int fibonacci_matrix(int n){
    int F[2][2] = {{1, 1}, {1, 0}};
    if (n==0) return 0;
    if (n==1) return 1;
    matrix_power(F, n-1);
    return F[0][0];
}

// Time Complexity: O(log n)
int fibonacci_half_recursion(int n){
    if (n==0) return 0;
    if ((n==1) || (n==2)) return 1;
    int k;
    if ((n%2)==0){
        k = n/2;
        return (2*fibonacci_half_recursion(k-1)+fibonacci_half_recursion(k))*fibonacci_half_recursion(k);
    }
    k = (n+1)/2;
    return fibonacci_half_recursion(k-1)*fibonacci_half_recursion(k-1)+fibonacci_half_recursion(k)*fibonacci_half_recursion(k);
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int output = fibonacci_half_recursion(n);
    printf("%dth fibonnaci element = %d", n, output);

    return 0;
}
