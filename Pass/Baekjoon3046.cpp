/*
 *  2019-10-21 (월)
 */

#include <iostream>

using namespace std;

int main() {
    int r1, r2, s;
    
    cin >> r1;
    cin >> s;
    
    if( -2000 <= r1 + s <= 2000 ) {
        r2 = (s*2) - r1;
        cout << r2 << endl;
    } else {
        return 0;
    }    
}