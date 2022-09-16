// Problem Source: https://www.geeksforgeeks.org/check-length-string-equal-number-appended-last/


#include <iostream>
using namespace std;

bool appended(string str){
    
    bool ans;
    int n = str.size();
    int i = n-1;
    int num = 0;
    while (true){
        int element = str[i];
        if (element>=48 && element<=57){
            num*=10;
            num+=(element-48);
            i--;
        }
        else{
            break;
        }
    }
    if (num==i+1){
        return true;
    }
    else{
        return false;
    }
    
}

int main() {
   
    string str;
    cout << "Enter the string: ";
    cin>>str;
    bool ans = appended(str);
    cout<<"String size is appended at the end: ";
    if (ans==1) cout<<"True";
    else cout<<"False";
    
    return 0;
}
