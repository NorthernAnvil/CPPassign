#include <iostream>

using namespace std;

int x;

void enterValues() {
	cout << "Enter a number: ";
	cin >> x;
}

void quickMath() {
	if (x % 2 == 0) {
		cout << x << " is an even number" << endl;
	}
	else {
		cout << x << " is an odd number" << endl;
	}

}



int main() {
	enterValues();
	quickMath();


	return 0;
}