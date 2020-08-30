// 입력받은 값들을 가지는 N자리수를 만들어서 정렬하고난 후, 비교해서 다음숫자 보여주면 될듯?

#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N, num;
    string inStr;
    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> num;
        inStr += num;
    }

    cout << inStr << endl;

    
}