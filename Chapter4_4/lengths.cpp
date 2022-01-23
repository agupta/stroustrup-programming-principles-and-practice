#include "../std_lib_facilities.h"

constexpr double cm_conversion = 0.01;
constexpr double in_conversion = 2.54 * cm_conversion;
constexpr double ft_conversion = 12.0 * in_conversion;

double convert_to_m(double value, string unit) {
	if (unit == "m") {
		return value;
	}
	else if (unit == "cm") {
		return value * cm_conversion; // v * 0.01
	}
	else if (unit == "in") {
		return value * in_conversion; // v * 2.54 * 0.01
	}
	else if (unit == "ft") {
		return value * ft_conversion; // v * 12 * 2.54 * 0.01
	}
	else {
		error("invalid unit passed to convert_to_m: " + unit);
	}
}

//int main() {
//	double smallest;
//	double largest;
//	bool first_time = true;
//	double value;
//	string unit;
//	while (cin >> value >> unit) {
//		if (first_time) {
//			smallest = largest = value;
//			first_time = false;
//		}
//		if (value < smallest) {
//			cout << "That's the smallest value entered so far.\n";
//			smallest = value;
//		}
//		if (value > largest) {
//			cout << "That's the largest value entered so far.\n";
//			largest = value;
//		}
//	}
//	return 0;
//}

int main() {
	double sum = 0;
	vector<double> lengths;
	double smallest;
	double largest;
	bool first_time = true;

	double value;
	string unit;
	while (cin >> value >> unit) {
		if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft") {
			double length_in_m = convert_to_m(value, unit);
			lengths.push_back(length_in_m);
			cout << "That length is " << length_in_m << "m.\n";
			if (first_time) {
				smallest = largest = length_in_m;
				first_time = false;
			}
			if (length_in_m < smallest) {
				cout << "That's the smallest value entered so far.\n";
				smallest = length_in_m;
			}
			if (length_in_m > largest) {
				cout << "That's the largest value entered so far.\n";
				largest = length_in_m;
			}
			sum += length_in_m;
		}
		else {
			cout << "invalid unit " << unit << ".\n";
		}
	}
	if (not first_time) { // ensures the loop successfully ran at least once, so smallest and largest are initialised.
		cout << "Smallest length was " << smallest << "m.\n";
		cout << "Largest length was " << largest << "m.\n";
		cout << "Sum of the lengths was " << sum << "m.\n";

		cout << "Here are the sorted lengths:\n";
		sort(lengths);
		for (double length : lengths) {
			cout << length << "m\n";
		}
	}
	return 0;
}