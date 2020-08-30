#include<iostream>

using namespace std;
/*
 * k = 6 - 1 : 6개
 * (총 - 6개)
 * 
 * k = 7 - 1 : 6개
 *       - 2 : 1개
 * (총 - 7개)
 * 
 * k = 8 - 1 : 21개
 *       - 2 : 6개
 *       - 3 : 1개
 * (총 - 28개)
 * 
 * k = 9 - 1 : 56개
 *       - 2 : 21개
 *       - 3 : 6개
 *       - 4 : 1개
 * (총 - 84개)
 */
int main() { 
    int k;
    cin >> k;
    if(k == 0) {
        return 0;
    } else {
        int S[k];
        for(int i=0; i<k; i++) {
            cin >> S[i];
        }
    }
}