#include<iostream>

using namespace std;

/* 
 *  N을 1,2,3의 합으로 나타낸다.
 *  
 *  몇개 해보니 생각보다 간단하게 규칙이 발견되었다.
 * 
 *  A[n] = A[n-1] + A[n-2] + A[n-3] (단, n > 3)
 */

// 정수 N의 최대값 + 1
#define MAX 11 

int main() {

    int arr[MAX];
    // 1,2,3 인 경우 세팅
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    // N > 3 인 경우
    for(int i=4; i<MAX; i++) {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }

    int T, count;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        
        cout << arr[N] << endl;
    }
}