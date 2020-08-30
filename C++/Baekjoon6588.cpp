#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

#define MAX 1000000

/*
 * 에라토스테네스의 체 (Sieve of Eratosthenes) 알고리즘을 사용함  
 * 
 * 알고리즘 하나 배웠다.. 배수들 지워나가는 거.. 소수를 찾는 알고리즘 중 가장 유명하다
 * 
 * 아니.. 정답이랑 뭐가 다른지 1도 모르겠네 진짜..
 */

int arr[MAX];

vector<int> prime;

void getPrimeNum(void) {
    // 배열 초기화 
    arr[0] = arr[1] = 0;
    for(int i=2; i<MAX; i++) {
    
        arr[i] = i;
    
    }

    // 소수의 시작인 2 ~ MAX 까지
    for(int i=2; i*i<MAX; i++) {
    
        // i번째의 값 i가 소수이면 검사, 아니면 다음으로 넘어간다
        if(arr[i] == i) {
    
            // i번째 = i 이므로, i씩 증가하면, i의 배수를 모두 검사 가능하다
            for(int j=i*i; j<MAX; j+=i) {
    
                if(arr[j] == j) {
    
                    arr[j] = i;
    
                }
    
            }
    
        }
    
    }

    

    for(int i=3; i<MAX; i++) {
        
        if(arr[i] == i) {
            
            prime.push_back(i);
            
        }
    
    }

}  

int main(void) {

    getPrimeNum();
    
    while(1) {

        int n, flag=0;

        cin >> n;


        if(n == 0) {    

            break;

        } 
        
        // 소수의 시작인 2부터, n의 제곱근까지
        for(int i=0; i<prime.size(); i++) {

            if(arr[n-prime[i]] == (n - prime[i])) {

                cout << n << " = " << prime[i] << " + " << n - prime[i] << endl;

                flag = 1;

                break;

            }
        }

        if(flag == 0) {

            cout << "Goldbach's conjecture is wrong." << endl;

        }

    }

}