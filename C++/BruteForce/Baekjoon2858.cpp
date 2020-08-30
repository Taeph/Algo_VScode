#include<iostream>

using namespace std;

/*
 * 가장자리 : 빨강타일
 * 나머지 : 갈색타일
 * 나머지 타일의 가로(n), 세로(m) 일때, 빨강타일은 나머지 타일을 둘러싼다 
 * 갈색 타일의 개수 = n * m
 * 빨강색 타일의 개수 = 2*n + 2*m + 4
 */
int main() {
    int R, B;
    cin >> R >> B;
    int n=0, m=0;
    // 최대 가장자리 타일이 5000개가 될 수 있으므로, 최대값을 5000으로 설정
    for(int i=1; i<5000; i++) {
        n = i;
        if(B % i != 0) {
            continue;
        } else {
            m = B / i;
            if( 2*(m+n+2) == R) {
                break;
            }
        }
    }
    // 내부의 가로(n), 세로(m) 이므로, 전체 가로 세로를 구하기위해 양쪽 모서리를 더한다
    n = n + 2;
    m = m + 2;
    cout << max(n,m) << " " << min(n,m) << endl;
}