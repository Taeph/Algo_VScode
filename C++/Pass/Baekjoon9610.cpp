/*
 * 2019-11-03(일)
 * 
 */

#include <iostream>

using namespace std;

int main() {
    int tcnt, x, y;
    int arr[5] = {0,0,0,0,0};
    cin >> tcnt;
    
    if(tcnt < 1 || tcnt > 1000) {
        return 0;
    } else {
        while(tcnt--) {
            cin >> x >> y;
            if(x > 0 && y > 0) {    // Q1 : 1사분면
                arr[0]++;
            } else if ( x < 0 && y > 0) {   // Q2 : 2사분면
                arr[1]++;
            } else if ( x < 0 && y < 0) {   // Q3 : 3사분면
                arr[2]++;
            } else if ( x > 0 && y < 0) {   // Q4 : 4사분면
                arr[3]++;
            } else {    // AXIS : x축 or y축
                arr[4]++;
            }
        }
    }

    for(int i=0 ; i<sizeof(arr)/sizeof(arr[0]); i++) {
        if(i < 4) {
            cout << "Q" << i+1 << ": " << arr[i] << endl;
        } else {
            cout << "AXIS: " << arr[i] << endl; 
        }
    }

} 