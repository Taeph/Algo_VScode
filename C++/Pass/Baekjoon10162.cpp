/*
 * 2019-11-05(화)
 */

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int time, a=0, b=0, c=0;
    cin >> time;

    // 300s(5m) , 60s(1m) , 10s
    if(time % 10 != 0) {
        cout << -1 << endl;
    } else {
        a = time / 300; // 5분 버튼 횟수
        b = (time % 300) / 60; // 1분 버튼 횟수
        c = ((time % 300) % 60) / 10; // 10초 버튼 횟수
        if(((time % 300) % 60) % 10 != 0) {
            cout << -1 << endl;
        } else {
            cout << a << " " << b << " " << c << endl;
        }
    }
} 