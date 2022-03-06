#include <iostream>

using namespace std;


// When using using int insted of float the answare will be less accurate since int does´nt use decimals.
float cel;
float fahr;


void enterValues() {
	cout << "Enter the temperature in Celcius: ";
	cin >> cel;
}

void quickMath() {
	fahr = cel * 9 / 5 + 32;
}



int main() {
	enterValues();
	quickMath();

	cout << "The temperature in Fahrenheit is: " << fahr;

	return 0;
}