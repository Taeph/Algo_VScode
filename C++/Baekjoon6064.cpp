
/*
 * 2019-11-09(토)
 *
 * 예전이나 지금이나 발전한게 없다..씨발
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int tcnt, M, N, x, y;
    cin >> tcnt;

    /*
    * case 1 : M,N 모두 짝수 / x,y의 값 차이가 짝수 차이가 나야함
    * case 2 : M,N 짝수,홀수 / x,y의 값 차이가 짝수, 홀수 차이 모두 가능
    * case 3 : M,N 모두 홀수 / x,y의 값 차이가 홀수 차이가 나야함 
    */
    while(tcnt--) {
        cin >> M >> N >> x >> y;
        int tempX = 0, tempY = 0, count=0;
        
        // case 1 : M,N 이 모두 짝수이고, 입력받은 <x,y> 가 유효하지 않은 경우 
        if(M%2==0 && N%2==0) {
            if((x-y)%2!=0) {
                cout << -1 << endl;
                continue;
            }    
        }
        // case 2 : M,N 이 모두 홀수이고, 입력받은 <x,y> 가 유효하지 않은 경우
        if((M%2==0 && N%2!=0) || (M%2!=0 && N%2==0)) {
            if((x-y)%2!=0) {
                cout << -1 << endl;
                continue;
            }
        }


        // <x,y> 가 유효한 값인지 찾는게 아직 확실하지 않다. 


        // case 4 : 시간초과로 인해서 개선한 방법
        if(M < N) {
            // M < N 인 경우 (해결)
            count = (x * M) + (y - (x * M % N));
            cout << count << endl;
        } else if(M > N) {
            // M > N 인 경우 (미해결)
            count = (y * M) + (x);
        } else {
            // M == N 인 경우
        }
        

        // case 3 : <x,y> 가 유효하고, 값을 구하는 경우
        while(1) {
            if(tempX == x && tempY == y) {
                break;
            }
            else {
                tempX = tempX < M ? tempX + 1 : 1;
                tempY = tempY < N ? tempY + 1 : 1;
                count++;
            }
            cout << count << " : " << "<" << tempX << "," << tempY << ">" << endl;
        }
    }
}

