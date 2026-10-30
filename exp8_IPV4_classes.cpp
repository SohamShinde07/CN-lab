#include <iostream>

using namespace std;

int main() {
    int o1, o2, o3, o4;
    char d1, d2, d3;

    cout << "Enter an IPv4 address: ";
    cin >> o1 >> d1 >> o2 >> d2 >> o3 >> d3 >> o4;

    if (cin.fail() || d1 != '.' || d2 != '.' || d3 != '.') {
        cout << "Invalid IPv4 address." << endl;
        return 0;
    }

    if (o1 < 0 || o1 > 255 || o2 < 0 || o2 > 255 || o3 < 0 || o3 > 255 || o4 < 0 || o4 > 255) {
        cout << "Invalid IPv4 address." << endl;
        return 0;
    }

    cout << "Valid IPv4 address" << endl;

    if (o1 >= 0 && o1 <= 127) {
        cout << "Class: A" << endl;
        cout << "Network ID: " << o1 << endl;
        cout << "Host ID: " << o2 << "." << o3 << "." << o4 << endl;
    } else if (o1 >= 128 && o1 <= 191) {
        cout << "Class: B" << endl;
        cout << "Network ID: " << o1 << "." << o2 << endl;
        cout << "Host ID: " << o3 << "." << o4 << endl;
    } else if (o1 >= 192 && o1 <= 223) {
        cout << "Class: C" << endl;
        cout << "Network ID: " << o1 << "." << o2 << "." << o3 << endl;
        cout << "Host ID: " << o4 << endl;
    } else if (o1 >= 224 && o1 <= 239) {
        cout << "Class: D (Multicast)" << endl;
        cout << "Network ID: Not Applicable" << endl;
        cout << "Host ID: Not Applicable" << endl;
    } else if (o1 >= 240 && o1 <= 255) {
        cout << "Class: E (Experimental)" << endl;
        cout << "Network ID: Not Applicable" << endl;
        cout << "Host ID: Not Applicable" << endl;
    }

    return 0;
}
