/*
 *  2019-10-26 (토)
 * 
 *  Do not solve Algorithm problem everyday, my code is terrible..
 */

#include <iostream>

using namespace std;

int main(void) {
    int A,B,C,sameCnt,temp;
    cin >> A;
    cin >> B;
    cin >> C;
    int arr[3] = {A,B,C};
    int len = sizeof(arr) / sizeof(arr[0]);

    if((A==B) && (B==C) && (C==A)) {
        sameCnt = 3;
    } else if((A==B) || (B==C) || (C==A)) {
        sameCnt = 2;
    } else {
        sameCnt = 1;
    }

    switch (sameCnt) {
    case 1 :
        // find Max Value
        for(int i=0; i<len; i++) {
            if(i==0) {
                temp = arr[i];
            } else {
                if(temp - arr[i] < 0) {
                    temp = arr[i];
                }
            }
        } 
        cout << temp * 100 << endl;
        break;    
    case 2 :
        // find Same Value
        if( (A==B)) {
            temp = A;
        } else if ( B==C) {
            temp = B;
        } else {
            temp = C;
        }
        cout << temp * 100 + 1000 << endl;
        break;
    case 3 :
        cout << arr[0] * 1000 + 10000 << endl;
        break;
    }
}