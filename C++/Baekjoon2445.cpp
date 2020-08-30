/*
 * 2019-11-09(토)
 * 
 * 별찍기 문제에 속수무책...
 */

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int tcnt, i, idx, count;
    string star = "";
    cin >> tcnt;
    count = tcnt*2;
    // 쓰레기 같은 2중 for문... 고칠 방법 찾아보기
    for(idx=0; idx<count; idx++) {
        star = "";
        for(i=0; i<count; i++) {
            if(i <= idx || count-1 >= idx) {
                star.append("*");
            } else {
                star.append(" ");
            }
        }
        cout << star << endl;
    }
        
} 