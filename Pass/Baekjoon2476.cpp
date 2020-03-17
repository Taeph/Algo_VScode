/*
 * 2019-11-02(토)
 */

#include <iostream>

using namespace std;

int main() {
    int tcnt, a, b, c, reward, temp, max=0;
    cin >> tcnt;
    if(tcnt < 2 || tcnt > 1000) {
        return 0;
    } else {
        while(tcnt--) {
            cin >> a >> b >> c;
            if( a != b && b != c && c != a) {
                // different all number
                // find max number;
                temp = a > b ? a : b;
                temp = temp > c ? temp : c;
                reward = temp * 100;
            } else if( (a == b && b != c) || (b == c && b != a) || (c == a && c != b) ) {
                // two number same
                // find same number;
                if(a==b) {
                    temp = a;
                } else if(b==c) {
                    temp = b;
                } else {
                    temp = c;
                }
                reward = 1000 + 100 * temp;
            } else {
                // three number same
                reward = 10000 + 1000 * a;
            }
            
            if( max < reward ) {
                max = reward; 
            }
        }
        cout << max << endl;

    }
}
    