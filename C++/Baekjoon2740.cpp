
/*
 * 2019-11-10(일)
 * 
 * 백준에서는 틀렸는데 왜 틀렸을까?
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, M, K;

    // N * M 행렬
    N = 0, M = 0;
    cin >> N >> M;
    int arr1[N][M];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> arr1[i][j]; 
        }
    }

    // M * K 행렬
    M = 0, K = 0;
    cin >> M >> K;
    int arr2[M][K];
    for(int i=0; i<M; i++) {
        for(int j=0; j<K; j++) {
            cin >> arr2[i][j]; 
        }
    }

    // N * K 행렬
    int arr3[N][K];
    for(int a=0; a<N; a++) {
        for(int b=0; b<K; b++) {
            arr3[a][b] = 0;
            for(int c=0; c<M; c++) {
                arr3[a][b] += arr1[a][c] * arr2[c][b];
            }
        }
    }

    // 정답 출력
    for(int i=0; i<N; i++) {
        for(int j=0; j<K; j++) {
            cout << arr3[i][j] << ends;
        }
        cout << endl;
    }
}

