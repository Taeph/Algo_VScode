/*
 * 2019-11-08(금)
 */

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int tcnt, i, j;
    string star = "";
    cin >> tcnt;

    // 쓰레기 같은 2중 for문... 고칠 방법 찾아보기
    for(int i=0; i<tcnt; i++) {
        star = "";
        for(int j=0; j<i; j++) {
            star.append(" ");
        }
        for(int k=0; k<(tcnt-i)*2-1; k++) {
            star.append("*");
        }

        cout << star << endl;
    }
        
} 