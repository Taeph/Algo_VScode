/*
 *  2019-10-22 (화)
 */

#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
    // 헤더 파일에 가보면 'typedef long time_t'로 되어 있습니다. 즉, long과 동일하다고 보면 됩니다.
    time_t curr_time;
 
    // 시간 표시를 위한 구조체를 선언합니다.
    struct tm *curr_tm;
 
    // time 함수는 1970년 1월 1일 이후 몇초가 지났는지를 계산합니다. NULL을 인자로 사용합니다.
    curr_time = time(NULL);
 
    // 지역 시간을 기준으로 변환 및 출력 편의를 위하여 tm 구조체에 저장합니다.(포맷팅)
    curr_tm = localtime(&curr_time);
 
    //출력 예제
    cout << curr_tm->tm_year + 1900 << "-" << curr_tm->tm_mon + 1 << "-" << curr_tm->tm_mday << endl; 
}
