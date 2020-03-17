#include<iostream>
#include<vector>
#include<string>
#include<sstream>

/*
 *  getline(cin, string s) 로 한줄 입력을 받는다.
 *  
 *  3가지 경우가 있다. 
 *  공백(space) 를 []로 표현했다
 * 
 *  case 1 : Kang[]Tae[]Jun
 *  case 2 : []Kang[]Tae[]Jun
 *  case 3 : Kang[]Tae[]Jun[]
 * 
 *  모두 3개의 단어 이지만, 공백의 개수는 차이가 난다
 *  공백의 개수를 세어준 다음, case1 과 같은 경우만 별도로 처리해 주었다.
 * 
 *  하하핫
 */ 

using namespace std;
int main() {
    string s;
    int start=0, end=0, idx=0, count=0;
    getline(cin, s);
    
    vector<int> spaceIdx;

    while(1) {
        string temp = "";
        // " " 이 나오는 index를 찾는다
        start = s.find(" ", idx);
        spaceIdx.push_back(start);

        // 다음번 찾기 시작할 위치를 정해준다       
        idx = start + 1;

        // 공백을 모두 다 찾은 경우 반복문 종료
        if(idx == 0 || idx == s.length()) {
            break;
        } else {
            count++;
        }
    }
    // 맨처음이 공백이 아닌 경우, 마지막 단어가 있으므로, 1을 더해준다
    if(spaceIdx[0] != 0) {
        cout << count+1 << endl;
    } else {
        cout << count << endl;
    }
}