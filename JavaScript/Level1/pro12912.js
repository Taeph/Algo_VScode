// 두 정수 사이의 합
// https://programmers.co.kr/learn/courses/30/lessons/12912

console.log(solution(1,10000000));
console.log(solution(-10,11));
console.log(solution(-10,-5));

function solution(a, b) {
    var answer = 0;
    a == b ? answer = a : ( a > b ? answer = a*(a+1)/2 - (b-1)*(b)/2 : answer = b*(b+1)/2 - (a-1)*(a)/2 );

    return answer
}