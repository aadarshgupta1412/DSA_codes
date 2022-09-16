// Question source: https://www.geeksforgeeks.org/painters-partition-problem-set-2/
// Time Complexity: N*log(sum of array)
// Logic: 
// For 1 worker, time needed = sum of array
// For n worker, time needed = max of array
// For k workers (between 1..n), time needed = some value between (max..sum)
// Choose a given number of hours that any worker would have to do at max and find number of workers needed for the same
// Next, iteratively change number of hours range as per k till the range becomes a single number


#include <iostream>
using namespace std;

int no_of_worker(int arr[], int n, int max_hours){
    
    int result = 1;
    int total = 0;
    for (int i=0; i<n; i++){
        total+=arr[i];
        if (total>max_hours){
            total=arr[i];
            result++;
        }
    }
    return result;
    
}

int partition(int arr[], int n, int k){
    
    int max = arr[0];
    int sum = 0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
        if (max<arr[i]){
            max = arr[i];
        }
    }
    int low = max; 
    int high = sum;
    while (low<high){
        
        int mid = low + (high-low)/2;
        int worker_needed = no_of_worker(arr, n, mid);
        
        if (worker_needed<=k){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}

int main() {
    
    int k, n;
    cout << "Enter k (maximum number of workers to be used): ";
    cin>>k;
    cout << "Enter n (number of tasks): ";
    cin>>n;
    int arr[n];
    cout << "Enter task length array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The maximum time taken = "<<partition(arr, n, k);

    return 0;
}
