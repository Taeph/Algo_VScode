/*
 * 2019-11-03(일)
 * 
 * 이것도 왜 틀릴까?
 */

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    string str, a, b;
    int result=0, len=0;
    cin >> str;

    len = strlen(str.c_str());
    
    for(int i=0; i<len; i++) {
        a = str.substr(i,1);            // 맨 앞부터
        b = str.substr(len-(i+1),1);    // 맨 마지막부터
        // cout << a << " / " << b << endl;ss
        if( a.compare(b) == 0) {
            result = 0;
        } else {
            result = 1;
        }
    }

    cout << result << endl;
} 