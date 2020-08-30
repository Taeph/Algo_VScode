/*
 *  2019-10-25 (금)
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int year;
    bool b1, b2;
    cin >> year;

    b1 = (year % 4 == 0) && (year % 100 != 0);
    b2 = (year % 400 == 0 );

    if(b1 || b2 ) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

}