#include<iostream>
#include<vector>

using namespace std;

int findGCD(vector<int> v) {
    int GCD=1, sumGCD=0;
    for(int i=0; i<v.size()-1; i++) {
        for(int k=i; k<v.size(); k++) {
            for(int j=1; j<max(v[i], v[i+1]); j++) {
                if(v[i]%j==0 && v[i+1]%j==0) {
                    GCD = max(GCD,j);
                }
            }
            cout << GCD << endl;
            sumGCD += GCD;    
        }
    }
    return sumGCD;
}


int main() {
    int T, N, num;
    cin >> T;
    while(T--) {
        cin >> N;
        vector<int> vc;
        for(int i=0; i<N; i++) {
            cin >> num;
            vc.push_back(num);
        }
        cout << findGCD(vc) << endl;
    }
}

