/*
 * 2019-11-02(토)
 */

#include <iostream>
#include <map>

using namespace std;

int main() {
    string inData;
    map <string, float> score;      // Map 

    score.insert(make_pair("A+", 4.3));     // Map insert (key, value)
    score.insert(make_pair("A0", 4.0));
    score.insert(make_pair("A-", 3.7));
    
    score.insert(make_pair("B+", 3.3));
    score.insert(make_pair("B0", 3.0));
    score.insert(make_pair("B-", 2.7));
    
    score.insert(make_pair("C+", 2.3));
    score.insert(make_pair("C0", 2.0));
    score.insert(make_pair("C-", 1.7));
    
    score.insert(make_pair("D+", 1.3));
    score.insert(make_pair("D0", 1.0));
    score.insert(make_pair("D-", 0.7));

    score.insert(make_pair("F", 0.0));

    cin >> inData;

    cout << fixed;      // 소수점 고정
    cout.precision(1);  // 소수점 자리수 고정
    cout << score[inData] << endl;
}