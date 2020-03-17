/*
 * 2019-11-03(일)
 * 
 */

#include <iostream>

using namespace std;

int main() {
    int tcnt, result=0, vote;
    cin >> tcnt;
    if( tcnt < 1 || tcnt > 101 || tcnt % 2 == 0 ) {
        return 0;
    }
    while(tcnt--) {
        cin >> vote;
        if(vote == 1) {
            result++;
        } else {
            result--;
        }
    }

    if(result > 0) {
        cout << "Junhee is cute!" << endl;
    } else {
        cout << "Junhee is not cute!" << endl;
    }
}