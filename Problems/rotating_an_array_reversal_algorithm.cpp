#include <iostream>
using namespace std;

void reverse(int arr[], int index1, int index2){
    int start = index1;
    int end = index2;
    int mid = start + (end-start)/2;
    for (int i=start; i<=mid; i++){
        swap(arr[i], arr[end-i+start]);
    }
}

void rotate(int arr[], int n, int d){
    reverse(arr, 0, n-1);
    reverse(arr, 0, n-d-1);
    reverse(arr, n-d, n-1);
}

int main() {
    int n;
    cout << "Enter the size of array (n): ";
    cin >> n;
    int arr[n];
    cout<<"Enter the array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cout << "Enter the rotation index (d): ";
    cin>>d;
    rotate(arr, n, d);
    cout<<"Rotated array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    
    return 0;
}
