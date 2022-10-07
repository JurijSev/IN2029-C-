#include <iostream>
#include <cstdlib> // makes avaialble functions used in these expressions - initial c hints at that they ome from C.
#include <ctime>

using namespace std;

int main() {
	
	srand(time(nullptr)); //This initialises the system's pseudo-random number generator
	int n = 10;
	int secret = rand() % n + 1; //This generates a random number between 1 and n
	cout << "Guess a number between 1 and " << n << ": ";
	int guess;
	cin >> guess;
	while (guess != secret) {
		cout << "Wrong!";
		cin >> guess;
	}
	cout << "Correct! \n";
	return 0;

}