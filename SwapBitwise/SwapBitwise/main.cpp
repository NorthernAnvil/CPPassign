#include <iostream>
using namespace std;



void swappiSwap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

int main() {
	int a;
	int b;

	cout << "Enter a value for A: ";
	cin >> a;
	cout << "Enter a value for B: ";
	cin >> b;

	cout << "You entered A: " << a << " and B: " << b << endl;
	cout << "swappi swap" << endl;

	swappiSwap(a, b);

	cout << "A: " << a << " and B: " << b << endl;

	return 0;
}