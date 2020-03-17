#include<iostream>

using namespace std;

int result;

// 입력받은 수(num)를 n진수로 변환 - 재귀사용
int addNum(int num, int n ) {
    result += num%n;

    if(num / n == 0) {
        return result;
    } else {
        return addNum(num/n, n);
    }
 }

int main() {
    int num = 1000;
    while(num < 9999) {
        result = 0;
        int dex = addNum(num,10);
        result = 0;
        int doz = addNum(num,12);
        result = 0;
        int hex = addNum(num,16);
        
        if(dex == doz && dex == hex) {
            // cout << num << " : " <<  dex << " , " <<  doz << " , " << hex << endl;
            cout << num << endl;
        }
        num++;
    }
}