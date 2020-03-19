#include<iostream>
#include<vector>

using namespace std;

/*  
 *  2020-03-19(목)
 * 
 *  반복으로 최소공배수를 찾으려면, 1 ~ (a * b) 까지를 반복해야 하지만,
 *  반복으로 최대공약수를 찾는것은, 1 ~ 45,000 까지 반복한다.
 * 
 *  두 수를 곱한 후, 최소공약수로 최소공배수이다. 
 * 
 *  최소공배수를 찾으면 Time out
 *  물론 다른 방법으로 풀면 안날 수 있겠지만.. 나는 요렇게..
 */ 

int main() {
    int T, a, b, commonMul;
    cin >> T;

    for(int i=0; i<T; i++) {
        cin >> a >> b;
        commonMul = 1;        
        for(int j=1; j<=45000; j++) {
            if(a%j==0 && b%j==0) {
                commonMul = max(1, j);
            }
        }
        cout << a*b/commonMul << endl;
    }
}