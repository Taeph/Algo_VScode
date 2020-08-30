#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

/*
 *  2020-03-18 (수)
 * 
 *  틀렸습니다.
 *  뭔가 소수점에 대한 문제가 아닐까? 하는 생각
 */
int main() {
    int N, K;
    float num, avg1, avg2;
    vector<float> vec;

    // 소수점 고정 , 소수점 3자리 표현
    cout << fixed;
    cout.precision(3);

    cin >> N >> K;

    for(int i=0; i<N; i++) {
        cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    for(int i=K; i<N-K; i++) {
        avg1 += vec[i];
    }

    for(int i=0; i<N; i++) {
        if(i < K ) {
            avg2 += vec[K];
        } else if(i > N-K-1) {
            avg2 += vec[N-K-1];
        } else {
            avg2 += vec[i];
        }
    }
    
    // 절사평균
    cout << avg1/(N-2*K) << endl;
    // 보정평균
    cout << avg2/(N) << endl;
}