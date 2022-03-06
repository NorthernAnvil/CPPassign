#include <iostream>
#include <cstdlib>

using namespace std;

int x;
int y;
int diff;

void enterValues() {
	cout << "Enter your first value: ";
	cin >> x;
	cout << "Enter you second value: ";
	cin >> y;

	cout << "Values you entered are: " << x << " and " << y << endl;
}

void sixpack() {
	diff = std::abs(x - y);
	cout << "The difference between the two numbers is: " << diff << endl;
}



int main() {
	enterValues();
	sixpack();
	

	return 0;
}