// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int minXOR_nsquare(int arr[], int n){
    int minXOR = arr[0]*arr[1];
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            int var;
            var = arr[i] ^ arr[j];
            minXOR = min(minXOR, var);
        }
    }
    return minXOR;
}

int main(){
    cout << "Enter the size of array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x = minXOR_nsquare(arr, n);
    cout << "The minimum XOR is:" << x << endl;
}
