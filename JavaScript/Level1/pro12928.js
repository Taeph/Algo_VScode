// 약수의 합
// https://programmers.co.kr/learn/courses/30/lessons/12928

console.log(solution(12));
console.log(solution(5));

function solution(n) {
    var answer = 0;
    for(var i=1; i<=n; i++) {
        n%i == 0 ? answer += i : answer += 0;
    }
    return answer;
}