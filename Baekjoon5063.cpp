/*
 * 2019-11-02(토)
 * 
 * 왜 틀리는 걸까~? 고민~
 *  
 */

#include <iostream>

using namespace std;

int main() {
    int tcnt, r,e,c;
    cin >> tcnt;
    string str = "";

    while(tcnt--) {
        cin >> r >> e >> c;
        if (e-c > r) {
            str.append("advertise\n");
            // cout << "advertise" << endl;
        } else if (e-c == r) {
            str.append("dose not matter\n");
            // cout << "dose not matter" << endl;
        } else {
            str.append("do not advertise\n");
            // cout << "do not advertise" << endl;
        }
    }
    string result = str.substr(0,str.length() -1);

    cout << result << endl;
}