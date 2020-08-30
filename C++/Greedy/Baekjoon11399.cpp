#include<iostream>
#include<algorithm>

using namespace std;

// 내림차순
int desc (int a, int b) {
    return a > b;
}

// 오름차순
int acs (int a, int b) {
    return a < b;
}

// Greedy Algorithm - 매순간 최선의 선택을 한다
int main() {
    int N, result = 0;
    cin >> N;
    int pArr[N];
    for(int i=0; i<N; i++) {
        cin >> pArr[i];
    }

    /*
    *  배열의 정렬 - 기본적으로 오름차순으로 정렬
    *  func 에 함수를 정의하고, 넣어주면 내림차순으로 정렬도 가능
    *  : sort(arr, arr + sizeof(arr), func)
    */
    sort(pArr, pArr+N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<i+1; j++) {
            result += pArr[j];
        }
    }

    cout << result << endl;
    
}