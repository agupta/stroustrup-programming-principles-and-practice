#include "../std_lib_facilities.h"

int area(int length, int width) {
	if (length <= 0 || width <= 0) {
		throw runtime_error("non-positive length and/or width.");
	}
	int area = length * width;
	if (area <= 0) {
		throw runtime_error("post-condition");
	}
	return area;
}

int main() {
	try {
		cout << "Enter the length and width of the rectangle whose area you want to calculate:\n";
		int length, width;
		cin >> length >> width;
		cout << "The area is " << area(length, width);
	}
	catch (const exception& e) {
		cerr << "oops: " << e.what();
	}
}