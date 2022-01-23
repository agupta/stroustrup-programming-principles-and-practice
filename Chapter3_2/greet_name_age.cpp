#include "../std_lib_facilities.h"

// inputs and outputs a string and a double. multiplies the double by 12 and outputs it.

int main() {
	cout <<  "Enter your first name and age:\n";
	string first_name = "???";
	double age = -1; // you could use int as well
	cin >> first_name >> age;
	cout << "Hello, " << first_name << ", " << age << "!\n";
	cout << "You are " << age * 12 << " months old.\n"; // if you used int, you'll only get multiples of 12 here.
}