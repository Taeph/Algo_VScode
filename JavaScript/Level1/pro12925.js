// 문자열을 정수로 바꾸기
// https://programmers.co.kr/learn/courses/30/lessons/12925

console.log(solution('1234'));
console.log(solution('-1234'));

function solution(s) {
    var answer = 0;
    answer = parseInt(s);
    // 자바스크립트는 문자열과 숫자를 사칙연산 하면, 문자가 숫자로 자동파싱
    // answer = +s 
    return answer;
}