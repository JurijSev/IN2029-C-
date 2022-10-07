#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "What is your name? \n";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!\n";
	for (int i = 0; i <= name.size()+7; i++) {
		cout << "=";
	}
}