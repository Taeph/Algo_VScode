#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
 
 /*
  * 2020-03-18 (수)
  * 
  * 시간초과
  * 
  */ 
int main() {
    int N, M, num, count=0;
    vector<int> vecN;

    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> num;
        vecN.push_back(num);
    }
    
    cin >> M;
    for(int i=0; i<M; i++) {
        cin >> num;
        for(int j=0; j<M; j++) {
            if(num == vecN[j]) {
                count++;
                break;
            }
        }
        if(count != 0) {
            cout << 1 << ends;
        } else {
            cout << 0 << ends;
        }
        count = 0;
    }
}