/*
 * 2019-11-05(화)
 */

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int testCase;
    string result = "";

    // 숫자 커지면 시간초과 나올거 같은 코드.. 개선 방법이 있을까?
    while(1) {
        cin >> testCase;     
        if(testCase == -1) {
            break;
        } else {
            int temp = testCase;
            for(int i=1; i<testCase; i++) {
                if(i==1) {
                    temp -= i;
                    result = to_string(testCase) + " = " + to_string(i);
                } else {
                    if(testCase % i == 0) {
                        temp -= i;
                        result.append(" + " + to_string(i));
                    }
                }
            }

            if(temp == 0) {
                cout << result << endl;
            } else {
                cout << testCase << " is NOT perfect." << endl;
            }
        }
    }
} 