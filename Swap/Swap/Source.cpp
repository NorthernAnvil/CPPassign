#include <iostream>
using namespace std;


void swapMath(int* x,int* y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;

}

void swapMath2(int& x, int& y) {
	x = x + y;
	y = x - y;
	x = x - y;

}

int main() {
	int x;
	int y;

	cout << "Enter a value for x: ";
	cin >> x;
	cout << "Enter a value for y: ";
	cin >> y;

	cout << "Before swap" << endl;
	cout << "X = " << x << "  ----------  " << "Y = " << y << endl;
	swap(x, y);
	cout << "After the swap with std::swap" << endl;
	cout << "X = " << x << "  ----------  " << "Y = " << y << endl;
	swapMath(&x, &y);
	cout << "After the swap without using Temp but using pointers" << endl;
	cout << "X = " << x << "  ----------  " << "Y = " << y << endl;
	swapMath2(x, y);
	cout << "After the swap without using Temp but using references" << endl;
	cout << "X = " << x << "  ----------  " << "Y = " << y << endl;

	return 0;
}