#include <iostream>
using namespace std;

int binary_search(int arr[], int start, int end, int x){
    while (start<=end){
        int mid = start + (end-start)/2;    //do some experiment here
        if (arr[mid]==x){
            return mid;
        }
        else if (arr[mid]>x){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main() {
    cout << "Enter the size of array,followed by the array elements: " << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter the search element: " << endl;
    int x;
    cin >> x;
    int index = binary_search(arr, 0, n-1, x);
    if (index==-1){
        cout << "Element not found!" << endl;
    }
    else{
        cout << "Element found at index: " << index << endl;
    }
    return 0;
}
