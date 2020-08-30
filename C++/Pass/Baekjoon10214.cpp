/*
 * 2019-11-05(화)
 */

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int tcnt, scoreY, scoreK, a, b;
    cin >> tcnt;

     while(tcnt--) {
        scoreY = 0;
        scoreK = 0;
        
        for(int i=0; i<9; i++) {
            cin >> a >> b;
            scoreY += a;
            scoreK += b;
        }
    
        if(scoreY > scoreK) {
            cout << "Yonsei" << endl;
        } else if(scoreY < scoreK) {
            cout << "Korea" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }
    
} 