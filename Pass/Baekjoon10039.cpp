/*
 *  2019-10-25 (금)
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int scoreArr[5];
    int avg = 0 ,sum = 0;
    int len = (sizeof(scoreArr) / sizeof(*scoreArr));
    
    for(int i=0; i<len; i++) {
        cin >> scoreArr[i];
        if ( scoreArr[i] < 40) {
            scoreArr[i] = 40;
        }
        sum += scoreArr[i];
    }
    avg = sum / len;
    cout << avg << endl;
}