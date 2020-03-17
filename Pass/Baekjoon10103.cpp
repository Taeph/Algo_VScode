/*
 * 2019-11-05(화)
 */

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int tcnt, scoreA=100, scoreB=100, a, b;
    cin >> tcnt;

    while(tcnt--) {
        cin >> a >> b;
        if( a == b) {
            continue;
        } else {
            if( a > b) {
                scoreB -= a;
            } else {
                scoreA -= b;
            }
        }
    }
    cout << scoreA << endl;
    cout << scoreB << endl;
} 