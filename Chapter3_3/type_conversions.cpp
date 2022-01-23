#include "../std_lib_facilities.h"

int main() {
	double d = 0;
	while ( cin >> d) {
		int to_int = d;
		char to_char = d;
		char to_int_to_char = to_int;
		cout << d << to_int << to_char << to_int_to_char << "\n";
	}

}