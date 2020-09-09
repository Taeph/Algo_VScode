// 짝수외 홀수
// https://programmers.co.kr/learn/courses/30/lessons/12937

console.log(solution(3));
console.log(solution(4));

function solution(num) {
    var answer = '';
    answer = num%2==0 ? 'Even' : 'Odd';
    return answer;
}