#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

/*
 *  2020-03-18 (수) 
 * 
 *  시간초과
 * 
 */ 
int main() {
    int N, M, num, cnt=0;
    vector<int> vecN;

    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> num;
        vecN.push_back(num);
    }
    
    sort(vecN.begin(), vecN.end());

    cin >> M;
    while(M--) {
        cin >> num;
        for(int i=0; i<N; i++) {
            if(num == vecN[i]) {
                cnt++;
                break;
            } 
        }
        if(cnt != 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        cnt = 0;
    }
}