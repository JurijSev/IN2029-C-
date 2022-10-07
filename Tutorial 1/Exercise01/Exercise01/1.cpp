#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "What is your age?\n";
	int age;
	cin >> age;
	cout << "You said you are " << age << '\n';
	if (age < 18) {
		cout << age << " is too young.\n";
	}
	else if (age > 30) {
		cout << age << " is too old.\n";
	}
	else {
		cout << age << " is the right age.\n";
	}
	return 0;
}