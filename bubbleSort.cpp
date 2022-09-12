#include <iostream>
using namespace std;

void bSort(int arr[], int n){
    int i, j;
    bool swapped;
  
    for (int i=0; i<n-1; i++){
        swapped = false;
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
    if (swapped==false)
        break;
    }
}

int bubbleSort(int arr[], int n){
    bSort(arr, n);
    for (int i=0; i<n; i++){
        if (i==n-1){
            cout << arr[i];
        }
        else{
            cout << arr[i] << ' ';
        }
    }
}


int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Sorted array: ";
    bubbleSort(arr, n);

    return 0;
}
