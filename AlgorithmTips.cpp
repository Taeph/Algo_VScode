#include <iostream>

using namespace std;

/*
 * Algorithm Tips
 * 알고리즘 푸는데 필요한, 까먹기 좋은 것들
 * 알고리즘 문제를 해결하는 경우
 * 다양한 종류의 Input Data 를 받아야 하는데, 그 방법 정리
 */

// 1. TestCase 개수가 확실히 알 수 있는 경우
void funcInputType1() {
    int tcnt, a, b;     // 변수 정의
    cin >> tcnt;        // TestCase 개수 입력 
    while(tcnt--) {
        cin >> a >> b;  // TestCase 개수 만큼, 값 a,b 입력
    }
}

// 2. TestCase 개수를 확실히 알 수 없는 경우
void funcInputType2() {
    int a,b;        // 변수정의
    while(cin >> a >> b);   // 'EOF'까지 입력
}

// 3. 한 줄씩 입력을 받는 경우
void funcInputType3() {
    string str;
    for(int i=0; i<100; i++) {
        getline(cin, str);      // getline - 한 줄씩 읽어온다
    }
}

// 4. cin 버퍼 비우기 (안하면 \n 값이 들어가 있다)
void funcInputType3() {
    string str;
    cin >> str;
    cin.ignore();

    // 위의 함수를 안하면 맨처음 \n 값이 들어간다
    for(int i=0; i<100; i++) {
        string k;
        cin >> k;
    }
}



/*
 * 알고리즘 문제 푸는데 필요한 이런저런 TIP
 */

// 1. 원하는 소수점 자리수 표현
void Tips1() {
    cout << fixed;                  // 소수점 고정
    cout.precision(1);              // 소수점 1자리 표현 
    cout << float(1.001) << endl;   // 1.0 출력
}

// 2. 문자열 함수 사용시, const char * 과 string 는 분명 다르다
void Tips2() {
    string str;
    const char * ch;    // const char * 과 char * 의 차이는 뭘까?

    ch = str.c_str();   // string -> char *
    str = string(ch);   // char * -> string
}

// 3. 문자열(string) 비교
void Tips3() {
    string strA;
    string strB;

    // str1.compare(str2) 같으면 0 을 반환
    if(strA.compare(strB) == 0) {
        cout << "same" << endl;
    }
}

// 4. int to string 
void Tips4() {
    int a;
    string str;

    str = to_string(a); // int -> string
    a = stoi(str); // string -> int
}
