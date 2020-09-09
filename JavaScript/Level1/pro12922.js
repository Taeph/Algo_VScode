// 수박수박수박수박수박수?
// https://programmers.co.kr/learn/courses/30/lessons/12922

console.log(solution(3));
console.log(solution(4));
console.log(solution(1));

function solution(n) {
    var answer = '';
    for( var i=1; i<=n; i++) {
        i%2 != 0 ? answer += '수' : answer += '박';
    }
    return answer;
}