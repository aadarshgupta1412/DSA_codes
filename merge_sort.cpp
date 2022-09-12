#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1], M[n2];
    for (int i=0; i<n1; i++){
        L[i] = arr[l+i];
    }
    for (int i=0; i<n2; i++){
        M[i] = arr[m+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2){
        if (L[i]<=M[j]){
            arr[k] = L[i];
            i++;
            k++;
        }
        else{
            arr[k] = M[j];
            j++;
            k++;
        }
    }
    while (i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j<n2){
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if (l<r){
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
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
    cout << "Sorted Array: ";
    mergeSort(arr, 0, n-1);
    //int N = sizeof(arr)/sizeof(arr[0]);
    for (int c=0; c<n; c++){
        if (c==n-1){
            cout << arr[c];
        }
        else{
            cout << arr[c]<<' ';
        }
    }
    
    return 0;
}
