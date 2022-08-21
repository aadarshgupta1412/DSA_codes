#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the two numbers to be swapped: ";
    cin >> a >> b;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << "The swapped numbers are: " << a << ' ' << b;

}
