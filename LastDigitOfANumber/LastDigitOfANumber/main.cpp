#include <iostream>
using namespace std;

int quickMathBackwards(int n) {
    while (n > 0) {
        int digit = n % 10;
        n = n / 10;
        cout << digit << " ";
        // cout << n << " ";
    }
    return 1;
}

int quickMath(int n) {
    if (n >= 1) {        
        quickMath(n / 10); 
        int digit = n % 10;
        cout << digit << " ";
    }
    return 1;
}

// cout << n << " ";

int main() {

    int x;
    cout << "Enter a number: " << endl;
    cin >> x;  
    cout << "Last digit of the number is: " << x % 10 << endl;
    quickMathBackwards(x);
    cout << endl;
    quickMath(x);

    



    return 0;

}