
/*
 * 2019-11-13(수)
 *
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string strIn, strOut, temp;
    cin >> strIn;

    temp = strIn;
    while(1) {
        // 문자열의 맨 처음값을 넣는다
        strOut.append(temp.substr(0,1));

        // '-' 나오는 index를 찾는다, 찾는 값이 없는 경우 -1을 반환한다
        int idx = temp.find("-");   
        if(idx == -1) {
            break;
        }

        // '-' 뒤의 알파벳부터 마지막까지 잘라서 새로운 문자열을 만든다
        temp = temp.substr(idx + 1 , temp.length() - idx );
    }
    cout << strOut << endl;
}