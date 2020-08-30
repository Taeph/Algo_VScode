/*
 * 2019-10-27(일)
 */

#include <iostream>

using namespace std;

int main() {
    int K, N, M, P;
    cin >> K >> N >> M;

    P = (K*N) - M;
    if( P <= 0) {
        cout << 0 << endl;
    } else {
        cout << P << endl;
    }
}