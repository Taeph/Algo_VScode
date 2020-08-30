/*
 *  2019-10-22 (화)
 */

#include <iostream>

using namespace std;

int main() {
    int A, I, result;
    cin >> A;
    cin >> I;

    // 평균값이 1인 경우, 수록된 곡이 몇곡이더라도 올림을 하기 때문에 저작권이 있는 멜로디는 최소 1곡이다
    if(I != 1) {
        result = (A * (I-1)) + 1;
    } else {
        result = 1;
    }
    cout << result << endl;
}