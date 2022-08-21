#include <iostream>
using namespace std;

int search(int arr[], int n, int x){
    for (int i=0; i<n; i++){
        if (arr[i]==x){
            return i;
        }

    }
    return -1;
}

int main(){
    int n;
    int x;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter the search element:" << endl;
    cin >> x;
    int k = search(arr, n, x);
    cout <<  k << endl;
}
