#include <iostream>
using namespace std;

string malou_name() {
    return "Monkey Malou";
}

string brother_name() {
    return "Monkey Brother";
}

int main() {
    cout << malou_name() << " AND " << brother_name() << endl;
    return 0;
}