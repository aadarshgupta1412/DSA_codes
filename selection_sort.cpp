#include <iostream>
using namespace std; 

int find_min(int arr[], int i, int j){
    int min=i;
    for (int k=i; k<=j; k++){
        if (arr[k]<arr[min]){
            min = k;
        }
    }
    return min;
}

void selectionSort(int arr[], int n){
    
    for (int i=0; i<n; i++){
        int index = find_min(arr, i, n-1);
        swap(arr[i], arr[index]);
    }
    cout<<"Sorted array: ";
    for (int x=0; x<n; x++){
        cout<<arr[x]<<" ";
    }
    
}


int main() {
    
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array: ";
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr, n);
    
    return 0;
}
