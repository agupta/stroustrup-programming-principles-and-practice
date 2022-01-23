// print squares from 0 to number_of_squares - 1

#include "../std_lib_facilities.h"

int square(int x) {
	return x * x;
}

int main() {
	constexpr int number_of_squares = 25;
	cout << "n\t\tn^2\n\n";
	for (int i = 0; i < number_of_squares; i++) {
		cout << i << "\t\t" << square(i) << "\n";
	}
	return 0;
}