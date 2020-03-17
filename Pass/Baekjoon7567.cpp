/*
 * 2019-11-02(토)
 * 
 * 이미 사용한 string 변수에 (즉, 값이 들어있는 string 변수), 
 * substr 로 새로운 값을 넣어주면, std::out_of_range 와 같은 오류가 나오는 것 같다.
 * 
 */

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int len, result;
    const char *input;
    string strIn, temp, bftemp;

    getline(cin, strIn);     // 입력
    input = strIn.c_str();   // string to char *
    len = strlen(input);    // char * 의 길이
    
    if( len < 3 || len > 50 ) {
        return 0;
    } else {
        for(int i=0; i<len; i++) {
            string str = input;
            temp = str.substr(i,1);

            if( i == 0 ) {
                result = 10;
            } else {
                if( temp.compare(bftemp) == 0) {
                    result += 5;
                } else {
                    result += 10;
                }
            }
            bftemp = temp;
        }
    }
    cout << result << endl;
}