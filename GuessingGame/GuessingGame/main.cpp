#include <iostream>

using namespace std;

int secretNum;
int guessNum;
int triesNum = 0;

int randomizeNumber() {	
	return secretNum = rand() % 100 + 1;
}

void takeinDahGuess() {
	cout << "PLX enter a number: ";
	cin >> guessNum;
	cout << "Your guess is: " << guessNum << endl;
	triesNum++;
	
}

// void handleReset() {
// 
// }

void winCondition() {
	

	while (guessNum != secretNum) {	
		if (secretNum > guessNum) {
			cout << "Your guess was to low, Bummer!" << endl;
		}
		else if (secretNum < guessNum) {
			cout << "Your guess smoked to much weed..." << endl;
		}
		takeinDahGuess();
	}
	cout << "OMG You are not a nobody! YOU ARE A WIIIEEENEEERRR(Korv)!";

	
}

int main() {
	srand(time(0));
	randomizeNumber();
	takeinDahGuess();
	winCondition();

	cout << secretNum << endl;
	cout << "It took you way to many tryes: " << triesNum << " rly?...";
}