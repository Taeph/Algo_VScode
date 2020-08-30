#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int nArr[N], tempArr[N], idx=0;
    for(int i=0; i<N; i++) {
        cin >> nArr[i]; 
    }
    // 왼쪽에 자기보다 큰사람 수의 최대값
    int orderMax = *max_element(nArr, nArr+N);
    cout << orderMax << endl;

    // 왼쪽에 자기보다 큰사람이 몇명있는지
    for(int j=0; j<=orderMax; j++) {
        for(int i=0; i<N; i++) {
            if(nArr[i] == j) {
                tempArr[idx] = i;
                cout << nArr[i] << ", " << tempArr[idx] << endl;
                idx++;
            }
        }
    }

}