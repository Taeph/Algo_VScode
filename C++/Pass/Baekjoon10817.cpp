/*
 *  2019-10-25 (금)
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int A, B, C;
    int rankA=0, rankB=0, rankC=0;
    cin >> A;
    cin >> B;
    cin >> C;

    // temp 는 각 입력값의 rank 
    // rank 값이 1인 숫자가 중간값 (두번째 큰 수)
    A - B > 0 ? rankA++ : rankB++; 
    B - C > 0 ? rankB++ : rankC++; 
    C - A > 0 ? rankC++ : rankA++; 

    if(rankA == 1) {
        cout << A << endl;s
    } else if(rankB == 1) {
        cout << B << endl;
    } else if(rankC == 1) {
        cout << C << endl;
    }
    
}