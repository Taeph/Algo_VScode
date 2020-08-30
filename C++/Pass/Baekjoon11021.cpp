/*
 *  2019-10-21 (월)
 */

#include <iostream>

using namespace std;

int main() {
    int index, a, b;

    cin >> index;
    
    string text[index];
    for(int i=0; i<index; i++) {
        cin >> a;
        cin >> b;
        string str = "Case #" + to_string(i+1) + ": " +to_string(a+b);

        text[i] = str;
    }

    for(int i=0; i<index; i++) {
        cout << text[i] << endl;
    }
}