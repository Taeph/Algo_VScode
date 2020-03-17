#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>

/*
 * 이전에 사용한것을 저장해두고 다시 사용하는 형태.. Dynamic Programming 형태인가? (DP)
 * 
 * 자리수 마다 vector 에 저장해두고, 1 ~ 9 까지의 숫자중에서 맨 앞자리보다 큰 경우에 그 앞에 붙여준다.
 * 
 * 각 상태의 시작과 끝 index 를 저장해둔다 (vstart, vend)
 * 이전 상태의 값들의 제일 앞자리 수와 비교해서 더 큰경우 붙여준다
 * 
 * 1 : vector 처음상태 - 0, 1, 2, 3, 4, 5, 6, 7, 8 ,9  ( 10 의 0 승) 
 *  
 * 2 : vector 두번째 상태 - 10, 20, 21  ........ 98    ( 10 의 1 승)
 * 
 * 3 : vector 세번째 상태 - 210, 310, 320, ......987   ( 10 의 2 승) 
 * 
 * git test 하핫
 */

using namespace std;
int main() {
    int vstart, vend, N;
    cin >> N;

    vector<long long> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    vstart = 0;
    vend = 9;

    if(N < 10) {
        cout << v[N] << endl;
    } else if ( N > 1021) {
        if( N == 1022) {
            cout << 9876543210 << endl;
        } else {
            cout << -1 << endl;
        }
    } else {
        // 0 ~ 1,000,000 까지 (10의 0승 ~ 6승)
        for(int i=1; i<10; i++) {
            // vector 시작 끝
            for(int k=vstart; k<vend; k++){
                // 1 ~ 9 까지 앞에 붙인다
                for(int j=1; j<10; j++)  {
                    string temp = to_string(v[k]);
                    // cout << temp << endl;
                    string temp2 = temp.substr(0,1);
                    // cout << temp2 << endl;
                    if(j <= stoi(temp2)) {
                        continue;                     
                    } else {
                        int val = stoll(to_string(j) + to_string(v[k]));
                        v.push_back(val);
                        // cout << val << " " << ends;
                    }
                }
            }

            // cout << " " << endl;
            sort(v.begin(), v.end());
            
            // cout << "size : " << v.size() << endl;

            // 정렬 후 출력
            // for(int a=0; a < v.size(); a++) {
            //     cout << v[a] << " " << ends;
            // }
            // cout << " " << endl;

            if(N >= v.size()) {
                vstart = vend;
                vend = v.size();
                // cout << "vstart : " << vstart << endl;
                // cout << "vend : " << vend << endl;            
            } else {
                break;
            }
        }            

        cout << v[N] << endl;    
    }
}