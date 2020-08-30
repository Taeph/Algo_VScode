/*
 * 2019-11-05(화)
 */

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int tcnt, ucnt, soju, max=0;
    string univName, winner;
    cin >> tcnt;
    
    while(tcnt--) {
        cin >> ucnt;
        while(ucnt--) {
            cin >> univName >> soju;
            if( max < soju) {
                max = soju;
                winner = univName;
            }
        }
        cout << winner << endl;
    }
} 