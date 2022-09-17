class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        // code here
        if (d<=(n/2)){
            int start = d;
            for (int i=0; i<n-d; i++){
                swap(arr[i], arr[d+i]);
            } 
        }
        else{
            int dup[n];
            for (int i=0; i<n; i++){
                dup[i] = arr[i];
            }
            for (int i=0; i<2*d-n; i++){
                dup[n+i] = 0;
            }
            int start = d;
            for (int i=0; i<d; i++){
                swap(dup[i], dup[d+i]);
            }
            for (int i=0; i<n-d; i++){
                arr[i] = dup[i];
            }
            for (int i=0; i<d; i++){
                arr[n-d+i] = dup[d+i];
            }
        }
    }
};
