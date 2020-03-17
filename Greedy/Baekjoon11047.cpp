#include<iostream>
#include<algorithm>

using namespace std;

// 백준 - ATM(11399), 거스름돈(5585) 문제랑 매우 유사하다
int main() {
    int N, K, idx=0, tcnt=0;
    cin >> N >> K;

    int priceArr[N];
    // 동전가치(Ai) 입력
    for(int i=0; i<N; i++) {
        cin >> priceArr[i];
        // 입력 금액보다 작은 동전의 최대값 인덱스 저장
        if(priceArr[i] < K) {
            idx = i;
        }
    }

    // 입력받은 금액보다 작은 동전들 중 제일 큰 값부터 계산
    for(int i=idx; i>=0; i--) {
        tcnt += K / priceArr[i];
        K = K % priceArr[i];
        // cout << tcnt << ", " << K << endl;
    }
    cout << tcnt << endl;
}