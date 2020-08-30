#include<iostream>
#include<algorithm>

using namespace std;
string DNA[4] = {"A", "C", "G", "T"};

// 각 DNA의 개수 배열의 최대값 인덱스 반환
int getmax(int * arr, int len) {
    int max = arr[0];
    int index = 0;
    for(int i=0; i<len; i++) {
        if(max < arr[i]) {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int main() {
    int N, M, count = 0;
    cin >> N >> M;

    // 값 입력
    string sArr[N];
    string str, s;
    cin.ignore(); // cin 버퍼를 비워준다 - 비우지않으면, 처음 엔터(\n) 값이 입력값으로 받아진다
    for(int i=0; i<N; i++) {
        getline(cin, str);      // getline - 한 줄씩 읽어온다
        sArr[i] = str;
    }

    /*
    * 해결방법 - 입력받은 DNA의 각 자리마다 가장 많이 나오는 문자를 가진 DNA를 대표DNA로 설정 (s)
    */
   for(int i=0; i<M; i++) {
       int cntArr[4] = {0, 0, 0, 0}; // A, C, G, T 순서로 각 자리에 문자가 나온 개수
       string newStr = "";
       int index = 0;
       for(int j=0; j<N; j++) {
            char k = sArr[j][i];
            switch(k) {
                case 'A' : 
                    cntArr[0]++;
                break;
                case 'C' :
                    cntArr[1]++;
                break;
                case 'G' :
                    cntArr[2]++;
                break;
                case 'T' :
                    cntArr[3]++;
                break;
            }
            newStr.push_back(k); // DNA의 각 자리의 문자를 합쳐서 만든 문자열
       }
       int maxIdx = getmax(cntArr, sizeof(cntArr)/sizeof(cntArr[0])); // 인덱스를 찾는 함수 호출
       
       // 가장 많이 나온 인덱스의 DNA가 대표 DNA, 나머지는 다른값이므로 Hamming Distance 값으로 더해준다
       for(int i=0; i<4; i++) {
           if(maxIdx == i) {
                s.append(DNA[i]);  
            } else {
               count += cntArr[i];
            }
       }
   }
   cout << s << endl;
   cout << count << endl;
}