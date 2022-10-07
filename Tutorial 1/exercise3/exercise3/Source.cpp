#include <iostream>
#include <cstdlib> // makes avaialble functions used in these expressions - initial c hints at that they ome from C.
#include <ctime>

using namespace std;

int main() {

	srand(time(nullptr)); //This initialises the system's pseudo-random number generator
	int n = 100;
	int secret = rand() % n + 1; //This generates a random number between 1 and n
	cout << "Guess a number between 1 and " << n << ": ";
	int guess;
	cin >> guess;
	int guessCount = 1;
	while (guess != secret) {
		guessCount++;
		cout << "Wrong!";
		if (guess < secret) {
			cout << "Your guess was too small!\n Try again\n";
		}
		else if (guess > secret) {
			cout << "Your guess was too large!\n Try again\n";
		}
		cin >> guess;
	}
	cout << "Correct! \n" << "You made " << guessCount << " guesses!\n";
	return 0;

}