/*
 *  2019-10-22 (화)
 */

#include <iostream>

using namespace std;

int main() {
    int hh, mm, usedtime;
    cin >> hh;
    cin >> mm;
    cin >>usedtime;

    int h = ((60 * hh) + mm + usedtime)/60; // new hour
    int m = ((60 * hh) + mm + usedtime)%60; // new minute

    // 시간이 0 ~ 23 으로 제한이 되어있다 - 처리
    cout << (h >= 24 ? h-24 : h ) << " " << m << endl; 
}