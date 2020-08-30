/*
 * 2019-11-02(토)
 */

#include <iostream>

using namespace std;

int main() {
    int hh, mm, hourToMin;
    cin >> hh >> mm;
    if( hh < 0 || hh > 23 || mm < 0 || mm > 59) {
        return 0;
    } else {
        // 0 : 00 ~ 0 : 45 인 경우, 24시로 표현해야 계산이 편하다
        if( hh == 0 && mm < 45) {
            hh = 24;
        } 
        hourToMin = (hh*60) + mm - 45;  // 입력시간 - 45분
        hh = hourToMin / 60;
        mm = hourToMin % 60;

        // 24 : 00 이 되면, 0 : 00 으로 고쳐준다
        if(hh == 24 && mm == 0) {
            hh = 0;
            mm = 0;
        } 
    }
    cout << hh << ' ' << mm << endl;
}