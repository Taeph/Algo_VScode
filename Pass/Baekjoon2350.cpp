/*
 *  2019-10-22 (화)
 */

#include <iostream>

using namespace std;

int main() {
    int hh, mm, ss, usedtime;
    cin >> hh;
    cin >> mm;
    cin >> ss;
    cin >> usedtime;
    
    int total = hh*3600 + mm*60 + ss + usedtime;

    int s = total%(60); // new second
    int m = (total/60)%60; // new minute
    int h = ((total/60)/60)%24; // new hour
   
    cout << h << " " << m << " " << s << endl;
}