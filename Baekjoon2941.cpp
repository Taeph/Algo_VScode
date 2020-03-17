
/*
 * 2019-11-13(수)
 *
 * 만족스럽지는 않은... 해결방법 다른방법 찾아보기
 * 
 */

#include <iostream>
#include <algorithm>

using namespace std;

// c= , c- , dz= , d- ,lj ,nj ,s= , z=
int main() {
    string strIn;
    int count=0;
    cin >> strIn;

    // c , d, l, n, s, z
    string strArr[100];
    for(int i=0; i<strIn.length(); i++) {
        strArr[i] = strIn.substr(i,1);
    }

    // 각 case 맞는 경우 +1 
    for(int idx=0; idx<strIn.length()-1; idx++) {
        if(strArr[idx].compare("c") == 0) {
            if( strArr[idx+1].compare("=") == 0 || strArr[idx+1].compare("-") == 0) {
                count += 1;
            } 
        } else if(strArr[idx].compare("d") == 0) {
            if(strArr[idx+1].compare("-") == 0) {
                count += 1;
            } else if( strArr[idx+1].compare("z") == 0 ) {
                if(strArr[idx+2].compare("=") == 0) {
                    count += 1;
                }
            }
        } else if(strArr[idx].compare("l") == 0 ) {
            if(strArr[idx+1].compare("j") == 0) {
                count += 1;
            }
        } else if(strArr[idx].compare("n") == 0 ) {
            if(strArr[idx+1].compare("j") == 0) {
                count += 1;
            }
        } else if(strArr[idx].compare("s") == 0) {
            if(strArr[idx+1].compare("=") == 0) {
                count += 1;
            }
        } else if(strArr[idx].compare("z") == 0) {
            if(strArr[idx+1].compare("=") == 0) {
                count += 1;
            }
        }
    }
    
    // 크로아티아 알파벳이 있는 개수 만큼 count 를 구했기 때문에, 전체에서 빼준다
    cout << strIn.length() - count << endl;
}