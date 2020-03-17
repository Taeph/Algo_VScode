/*
 *  2019-10-25 (금)
 * 
 *  BigInteger 구현
 *  정수형 크기르 넘는 결과 값
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int A, B, result;
    char cal;

    cin >> A;
    cin >> cal;
    cin >> B;

    switch (cal)
    {
    case '*' :
        result = A * B;
        break;
    case '+' :
        result = A + B;
        break;
    }

    cout << result << endl;
}