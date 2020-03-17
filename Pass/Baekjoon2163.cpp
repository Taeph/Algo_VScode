/*
 *  2019-10-21 (월)
 */

#include <iostream>

using namespace std;

int main() {
    int m, n, count;

    cin >> m;
    cin >> n;

    /*
     * chocolate count - 1 = divide count
     * ㅁㅁㅁㅁ -> ㅁ | ㅁ | ㅁ | ㅁ (3)
     */
    
    count = (m*n) - 1;
    cout << count << endl;
}