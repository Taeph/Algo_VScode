
/*
 * 2019-11-09(토)
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str;
    while(1) {
        getline(cin, str);
        if(str.compare("\n") == 0){
            break;
        }
        cout << str;

    }
}

