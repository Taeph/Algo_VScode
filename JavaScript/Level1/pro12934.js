// 정수 제곱근 판별
// https://programmers.co.kr/learn/courses/30/lessons/12934

console.log(solution(121));

function solution(n) {
    var answer = 0;
    Number.isInteger(Math.sqrt(n)) ? answer = Math.pow(Math.sqrt(n) + 1, 2) : answer = -1;
    return answer;
}