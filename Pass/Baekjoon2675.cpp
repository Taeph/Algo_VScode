/*
 *  2019-10-25 (금)
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int caseNum;
    cin >> caseNum;

    int rNum[caseNum];
    string rStr[caseNum];

    for(int i=0; i<caseNum; i++) {
        cin >> rNum[i];
        cin >> rStr[i];
    }

    // 3중 for문은 좀 아니지 않나?.. 수정하기
    // 쓰레기 같은 코딩
    for(int i=0; i<caseNum; i++) {
        string newStr = "";
        for(int j=0; j<rStr[i].length(); j++) {
            string temp = rStr[i].substr(j, 1); // * substr(시작점, 개수) : 문자열 자르기  
            for(int k=0; k<rNum[i]; k++) {
                newStr.append(temp); // 문자 반복수 만큼 넣기
            }
        }
        std::cout << newStr << endl;
    }
}