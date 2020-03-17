
/*
 * 2019-11-11(월)
 *
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string strIn, strOut;
    while(1) {
        // 한 줄씩 입력을 받아야 한다
        getline(cin, strIn);
        if(strIn.compare("END") == 0) {
            // 마지막 개행문자 제거
            strOut.pop_back();
            break;
        } else {
            // 뒤에서 부터 넣어준다, 다른 방법이 있지 않을까?
            for(int i=strIn.length(); i>=0; i--) {
                strOut.append(strIn.substr(i,1));
            }
            strOut.append("\n");
        }
    }
    cout << strOut << endl;
}