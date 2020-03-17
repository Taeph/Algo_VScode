/*
 * 2019-10-27 (일)
 * 
 * 문제 "각 테스트 케이스마다, 첫 번째 수가 두번째 수보다 크면 Yes를, 아니면 No를 한줄에 하나씩 출력한다"
 * 
 * 입력을 한번에 받아서, 출력을 한번에 제출해야 하는지 알고 하루종일 삽질했다.
 * 1 2
 * 3 4
 * 5 6
 * 0 0
 * 으로 입력이 들어오면
 * No
 * No
 * No
 * 으로 출력이 나와야 하는줄 알았는데,
 * 1 2
 * No
 * 3 4 
 * No
 * 5 6
 * No
 * 0 0
 * 이렇게 나와도 되는것 이었다.
 * 
 * 문자열 가지고 하루종일 고생했네..아래는 공부한 내용
 * 
 */

#include <iostream>

using namespace std;

int main(void) {
    int A, B;
    while(1) {
        cin >> A >> B;

        if(A==0 && B==0) {
            break;
        } else{
            if(A > B) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}

/*  
 * <개행 문자 전 까지 입력>
 * 1. getline : getline(cin , string) - string 개행 전 까지 입력 
 * 2. cin.geline : getline(char * , length) - char * 형 개행 전 까지 입력
 * 
 * <문자열 형변환>
 * 1. string -> char * : strcpy(char * , string.c_str() )
 * 2. char * -> string : string str(char *)
 * 
 * <공백 단위로 문자열 자르기>
 * 1. char * 문자열 : strtok(char *  , " ");
 * 2. string 문자열 : stringstream ss(string); while(string >> datatype)
 *
 */