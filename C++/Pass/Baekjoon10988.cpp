#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

/*
 *  2019-11-03(일)
 *  
 *  문자열의 맨앞, 맨뒤를 비교하면서 같으면 1 다르면 0 을 저장, 
 *  0 이 한번이라도 나오면 반복 종료
 * 
 */ 

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
            result = 1;
        } else {
            result = 0;
            break;
        }
    }

    cout << result << endl;
}