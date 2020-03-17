/*
 * 2019-11-03(일)
 * 
 */

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int tcnt, count=0, len=0;
    cin >> tcnt;

    string judgeStr, temp;
    cin >> judgeStr;

    len = strlen(judgeStr.c_str());

    // A이면 +1 , B이면 -1 
    for( int i=0 ; i<len; i++) {
        temp = judgeStr.substr(i,1);
        if(temp.compare("A") == 0) {
            count++;
        } else {
            count--;
        }
    }

    // 결과 출력
    if(count > 0) {
        cout << "A" << endl;
    } else if(count < 0) {
        cout << "B" << endl;
    } else {
        cout << "Tie" << endl;
    }
}