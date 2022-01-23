#include "../std_lib_facilities.h"

int main() {
	double smallest;
	double largest;
	bool first_time = true;
	double x;
	while (cin >> x) {
		if (first_time) {
			smallest = largest = x;
			first_time = false;
		}
		if (x < smallest) {
			cout << "That's the smallest value entered so far.\n";
			smallest = x;
		}
		if (x > largest) {
			cout << "That's the largest value entered so far.\n";
			largest = x;
		}
	}
	return 0;
}