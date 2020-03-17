/*
 *  2019-10-21 (월)
 */

#include <iostream>

using namespace std;

int main() {
    int a,b;
    int num1, num2, num3;

    cin >> a; // 472
    cin >> b; // 385

    num1 = b/100; // 100's num = 3
    num2 = b/10 - (num1 * 10); // 10's num = 8
    num3 = b - (num1 * 100 + num2 * 10); // 1's num = 5 

    cout << a * num3 << endl; // 472 * 5
    cout << a * num2 << endl; // 472 * 8
    cout << a * num1 << endl; // 472 * 3
    cout << a * b << endl;
}