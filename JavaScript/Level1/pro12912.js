// 두 정수 사이의 합
// https://programmers.co.kr/learn/courses/30/lessons/12912

// console.log(solution(1,10000000));
console.log(solution(-10,11));
console.log(solution(-10,-5));
console.log(solution(1,1));

// 이상한 것 같음... 4,7,9번 테스트케이스 실패 (자바스크립트)
function solution(a, b) {
    var answer = 0;

    // 이걸로 풀었는데 4,7,9번 실패해서 아래로 풀었는데도 실패함
    // a == b ? answer = a : ( a > b ? answer = a*(a+1)/2 - (b-1)*(b)/2 : answer = b*(b+1)/2 -(a-1)*(a)/2);

    var big, small;
    
    if(a > b) {
        big = a;
        small = b;
    } else if( a < b) {
        big = b;
        small = a;
    } else {
        return a;
    }

    for(var i=small; i<=big; i++) {
        answer += i;
    }

    return answer;
}

