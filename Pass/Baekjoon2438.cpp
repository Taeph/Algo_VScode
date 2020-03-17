/*
 * 2019-11-08(금)
 */

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int tcnt;
    string star = "";
    cin >> tcnt;

    for(int i=0; i<tcnt; i++) {
        star.append("*");
        cout << star << endl;
    }
} 