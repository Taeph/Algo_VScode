#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string k;
    int countA=0, countB=0;
    getline(cin, k);
    
    string start = k.substr(0, 1);
    string tempB = start;

    for(int i=1; i<k.length(); i++) {
        string tempA = k.substr(i,1);
        if(countA==0 && start.compare(tempA)) {
            countA++;
        } else if(countA!=0 && tempB.compare(tempA)!=0) {
            countA++;
            countB++;
        }
        cout << i << ": " << tempB << ", " << tempA << "/ " << tempB.compare(tempA) << "/ " << countA << ", "<< countB << endl;

        tempB = tempA;
    }
    cout << min(countA, countB) << endl;
}