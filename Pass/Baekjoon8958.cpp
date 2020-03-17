/*
 * 2019-11-05(화)
 */

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    string testCase;
    int tcnt, result, score;
    cin >> tcnt;

    while(tcnt--) {
        result = 0;
        score = 0;
        cin >> testCase;
        int len = strlen(testCase.c_str());
        for(int i=0; i<len; i++) {
            string temp = testCase.substr(i,1);
            if(temp.compare("O") == 0) {
                result++;
            } else {
                result = 0;
            }
            score += result;
        }
        cout << score << endl;
    }
} 