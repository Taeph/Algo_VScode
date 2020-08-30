#include<iostream>
#include<algorithm>
#include<map>

/*
 * 입력받은 전기용품 배열(자연수) 들에서 빈도수를 계산해서 멀티탭에서 교체를 해야할때,
 * 빈도수가 적은 용품부터 제거해보면 된다.
 * 
 * Map을 이용해서, Key(전기용품이름) / value(나오는순서) 를 저장해서,
 * 멀티탭에 넣은 후, value가 가장 큰 값부터 교체해준다
 */
using namespace std;

int main() {
    // 입력 (멀티탭, 전기용품사용횟수)
    int N, K, total = 0;
    cin >> N >> K;

    map <int, int> Emap;
    map <int, int> ::iterator idx;
    int kArr[K]; // 전기용품 이름 배열
    
    for(int i=0; i<K; i++) {
        int temp;
        cin >> temp;
        kArr[i] = temp;
        if(Emap.empty()) {
            Emap.insert(temp,1);
        } else {
            i = Emap.find(temp);
        }
    }

}