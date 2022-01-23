// indicates the smaller and larger of two doubles entered by the user

#include "../std_lib_facilities.h"

int main()
{
    double x = 0;
    double y = 0;
    while (cin >> x >> y) {
        cout << "You entered x=" << x << " and y=" << y << ".\n";
        if (x < y) {
            cout << "The smaller value is " << x << ".\n";
            cout << "The larger value is " << y << ".\n";
            if ((y - x) < 1.0 / 100)
                cout << "The numbers are almost equal.";
        }
        else if (x > y) {
            cout << "The smaller value is " << y << ".\n";
            cout << "The larger value is " << x << ".\n";
            if ((x - y) < 1.0 / 100)
                cout << "The numbers are almost equal.";
        }
        else {
            cout << "The numbers are equal.\n";
        }
    }
    return 0;
}