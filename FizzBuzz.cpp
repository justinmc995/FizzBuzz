#include <iostream>
using namespace std;

int main() {
	// Do FizzBuzz
	for (int i = 1; i <= 100; i++) {
		if (i % 15 == 0) {cout << "FizzBuzz";}
		else if (i % 3 == 0) {cout << "Fizz";}
		else if (i % 5 == 0) {cout << "Buzz";}
		else {cout << i;}
		cout << endl;
	}
	
	// Exit
	return 0;
}