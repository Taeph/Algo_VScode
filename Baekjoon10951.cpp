
/*
 * 2019-11-09(토)
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a,b;
    string s;
    while(1) {
        getline(cin, s);
        cout << s << endl;
        
        if(s == "") {
            break;
        } else {
            char c1 = s[0];
            char c2 = s[2];

            cout << c1 + c2 << endl;
        }
    }    
}